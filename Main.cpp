#include <drogon/drogon.h>

void handle_hi(const drogon::HttpRequestPtr&, std::function<void(const drogon::HttpResponsePtr&)>&& send_response_func)
{
    Json::Value json;
    json["message"] = "Hi";
    send_response_func(drogon::HttpResponse::newHttpJsonResponse(json));
}

int main()
{
    drogon::app()
        .registerHandler("/hi", &handle_hi)
        .setLogPath("./")
        .setThreadNum(16)
        .setLogLevel(trantor::Logger::LogLevel::kDebug)
        .addListener("0.0.0.0", 3000)
        .run();
}