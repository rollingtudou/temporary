#include<iostream>
#include<string>

// 去除首尾空格的函数
std::string trim(const std::string& s) {
    auto s_begin = s.find_first_not_of(' ');
    if (s_begin == std::string::npos) {
        return "";
    }
    auto s_end = s.find_last_not_of(' ');
    return s.substr(s_begin, s_end - s_begin + 1);
}