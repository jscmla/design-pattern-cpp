#include "PrintBanner.h"

#include <iostream>

using namespace std;

PrintBanner::PrintBanner(string str) : Banner(str) {}

void PrintBanner::PrintWeak() { Banner::ShowWithParen(); }

void PrintBanner::PrintStrong() { Banner::ShowWithAster(); }
