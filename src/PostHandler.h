#ifndef POST_HANDLER_H
#define POST_HANDLER_H

#include "HttpHandler.h"
#include <iostream>

class PostHandler : public HttpHandler {
public:
    void handleRequest(const std::string& request) override {
        std::cout << "Handling POST request: " << request << std::endl;
    }
};

#endif // POST_HANDLER_H
