#include "Banner.h"

#include <iostream>

using namespace std;

Banner::Banner(string str) { this->str = str; }

void Banner::ShowWithParen() { cout << "(" << str << ")" << endl; }

void Banner::ShowWithAster() { cout << "*" << str << "*" << endl; }
