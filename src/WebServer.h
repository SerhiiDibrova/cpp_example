#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <thread>
#include <vector>
#include <memory>
#include <queue>
#include <mutex>
#include "HttpHandler.h"
#include "GetHandler.h"
#include "PostHandler.h"

class WebServer {
public:
    WebServer() = default;

    void startServer();
};

#endif // WEBSERVER_H
