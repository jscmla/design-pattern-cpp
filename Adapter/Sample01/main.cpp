#include "PrintBanner.h"

int main() {
    // TODO: Printクラスで宣言する
    PrintBanner *p = new PrintBanner("Hello");
    p->PrintWeak();
    p->PrintStrong();
}
