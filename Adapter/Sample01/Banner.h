#include <string>

#pragma once

class Banner {
private:
    std::string str;

public:
    // TODO: デストラクタを実装する
    Banner(std::string str);
    void ShowWithParen();
    void ShowWithAster();
};
