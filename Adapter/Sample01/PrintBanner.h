#include <string>
#include "Banner.h"
#include "Print.h"

class PrintBanner : public Banner, Print {
    public:
     PrintBanner(std::string str);
     void PrintWeak();
     void PrintStrong();
};