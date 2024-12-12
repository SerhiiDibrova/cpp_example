#ifndef GET_HANDLER_H
#define GET_HANDLER_H

#include "HttpHandler.h"
#include <iostream>

class GetHandler : public HttpHandler {
public:
    void handleRequest(const std::string& request) override {
        std::cout << "Handling GET request: " << request << std::endl;
    }
};

#endif // GET_HANDLER_H
