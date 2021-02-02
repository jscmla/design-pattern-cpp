#include <string>

#pragma once

class Banner {
private:
    std::string str;

public:
    Banner(std::string str);
    void ShowWithParen();
    void ShowWithAster();
};
