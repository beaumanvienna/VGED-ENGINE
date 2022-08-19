#pragma once

#include "../core/debug.hpp"

#include <filesystem>
#include <string.h>
#include <fstream>

namespace VGED {
    namespace Engine {
        inline namespace Graphics {
            std::string read_file_to_string(const std::filesystem::path& path) {
                std::string code;
                std::ifstream in(path, std::ios::in | std::ios::binary);
                if (in) {
                    in.seekg(0, std::ios::end);
                    size_t size = in.tellg();
                    if (size != -1) {
                        code.resize(size);
                        in.seekg(0, std::ios::beg);
                        in.read(&code[0], size);
                    } else {
                        THROW("Empty file");
                    }
                } else {
                    THROW("Couldn't open a file");
                }
                return code;
            }

            std::string read_file_to_string(const std::string& path) {
                std::string code;
                std::ifstream in(path, std::ios::in | std::ios::binary);
                if (in) {
                    in.seekg(0, std::ios::end);
                    size_t size = in.tellg();
                    if (size != -1) {
                        code.resize(size);
                        in.seekg(0, std::ios::beg);
                        in.read(&code[0], size);
                    } else {
                        THROW("Empty file");
                    }
                } else {
                    THROW("Couldn't open a file");
                }
                return code;
            }
        }
    }
}