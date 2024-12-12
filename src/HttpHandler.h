#ifndef HTTP_HANDLER_H
#define HTTP_HANDLER_H

#include <string>

class HttpHandler {
public:
    virtual void handleRequest(const std::string& request) = 0;

    virtual ~HttpHandler() = default;
};

#endif // HTTP_HANDLER_H
