#include "WebServer.h"
#include <iostream>

void WebServer::startServer() {
    std::vector<std::string> requests = {"GET /home", "POST /submit", "GET /about"};
    std::queue<std::string> requestQueue;
    std::mutex queueMutex;

    // Наповнюємо чергу запитів
    for (const auto& request : requests) {
        requestQueue.push(request);
    }

    // Створюємо кілька потоків для обробки запитів
    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) {
        threads.push_back(std::thread([this, &requestQueue, &queueMutex]() {
            while (true) {
                std::string request;
                {
                    std::lock_guard<std::mutex> lock(queueMutex);
                    if (requestQueue.empty()) {
                        break;
                    }
                    request = requestQueue.front();
                    requestQueue.pop();
                }

                // Обробляємо запит
                HttpHandler* handler = nullptr;
                if (request.substr(0, 3) == "GET") {
                    handler = new GetHandler();
                } else if (request.substr(0, 4) == "POST") {
                    handler = new PostHandler();
                }

                if (handler) {
                    handler->handleRequest(request);
                    delete handler;
                }
            }
        }));
    }

    // Очікуємо завершення всіх потоків
    for (auto& thread : threads) {
        thread.join();
    }
}
