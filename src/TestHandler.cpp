#include "GetHandler.h"
#include "PostHandler.h"
#include <cassert>

void testGetHandler() {
    GetHandler getHandler;
    getHandler.handleRequest("GET /home");
    assert(true);  // Перевірка коректності роботи, додати конкретні перевірки
}

void testPostHandler() {
    PostHandler postHandler;
    postHandler.handleRequest("POST /submit");
    assert(true);  // Перевірка коректності роботи, додати конкретні перевірки
}

int main() {
    testGetHandler();
    testPostHandler();
    return 0;
}
