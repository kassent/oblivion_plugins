#include "LogUtils.h"
#include "FileUtils.h"
#include <memory>
#include <filesystem>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>

std::shared_ptr<spdlog::logger> global_logger;
void initLogger(const char* pluginName) {
    std::string logFilePath = FileUtils::GetDocumentsDirectory().data() + std::string("\\") + pluginName + std::string(".log");
    // Create a file rotating logger with 5 MB size max and 3 rotated files
    auto max_size = 1048576 * 5;
    auto max_files = 3;
    global_logger = spdlog::rotating_logger_mt("mhwi_logger", logFilePath, max_size, max_files);
    global_logger->flush_on(spdlog::level::debug);
    global_logger->set_level(spdlog::level::info);
    global_logger->set_pattern("[%Y-%m-%d %H:%M:%S.%e][%l][%t] %v");
}

void _MESSAGE(const char* fmt, ...) {
    if (fmt == nullptr) {
        return;
    }
    if (global_logger) {
        va_list args;
        va_start(args, fmt);
        auto len = vsnprintf(nullptr, 0, fmt, args);
        if (len <= 0) {
            return;
        }
        std::string buffer;
        buffer.resize(len + 1, 0);
        vsnprintf(buffer.data(), buffer.size(), fmt, args);
        va_end(args);
        global_logger->info(buffer);
    }
}
