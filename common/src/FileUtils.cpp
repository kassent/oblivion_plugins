#include <string>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <vector>
#include <system_error>
#include "FileUtils.h"

namespace FileUtils {
    std::string_view GetDocumentsDirectory() {
        static std::string defaultPath { []() -> std::string {
            char path[MAX_PATH] = { 0 };
            if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, path))) {
                return path;
            }
            return "";
        }() };
        return defaultPath;
    }

    std::filesystem::path GetExecutablePath() {
        char buffer[MAX_PATH] = {0};
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        return std::filesystem::path(buffer).parent_path();
    }
    
    std::string ReadBinaryFile(const std::filesystem::path& filepath) {
        std::ifstream file(filepath, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            return "";  // 返回空字符串表示读取失败
        }
        
        // 获取文件大小
        std::streamsize fileSize = file.tellg();
        file.seekg(0, std::ios::beg);
        
        // 分配内存
        std::string buffer;
        buffer.resize(static_cast<size_t>(fileSize));
        
        // 读取文件内容
        if (!file.read(buffer.data(), fileSize)) {
            return "";  // 读取过程中出错
        }
        
        return buffer;
    }
    
    bool WriteBinaryFile(const std::filesystem::path& filepath, const std::string& data) {
        try {
            // 确保目录存在
            std::filesystem::path dirPath = filepath.parent_path();
            if (!dirPath.empty() && !std::filesystem::exists(dirPath)) {
                std::filesystem::create_directories(dirPath);
            }
            
            // 打开文件进行写入
            std::ofstream file(filepath, std::ios::binary | std::ios::trunc);
            if (!file.is_open()) {
                return false;  // 无法打开文件
            }
            
            // 写入数据
            file.write(data.data(), data.size());
            
            // 检查写入是否成功
            if (file.fail()) {
                return false;
            }
            
            // 确保数据刷新到磁盘
            file.flush();
            
            // 关闭文件
            file.close();
            
            return true;
        } catch (const std::filesystem::filesystem_error& e) {
            // 处理文件系统错误
            return false;
        } catch (const std::exception& e) {
            // 处理其他可能的异常
            return false;
        }
    }
}
