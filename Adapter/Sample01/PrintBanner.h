#include <string>
#include "Banner.h"
#include "Print.h"

class PrintBanner : public Banner, Print {
public:
     // TODO: デストラクタを実装する
     PrintBanner(std::string str);
     void PrintWeak() override;
     void PrintStrong() override;
};