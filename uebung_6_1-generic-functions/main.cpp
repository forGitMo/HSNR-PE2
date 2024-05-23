#include <iostream>
#include "Generic.h"

int testSwap(double var1, double var2){
    if(var2 != var1)return 0;
    if(var2 == var1)return 1;
}

int main()
{
    double x = 1.9, y = 2.3;
    std::cout << min(x , y) << std::endl;

    std::cout << x << " " << y << std::endl;
    double testvar = x;

    swap(x,y);

    double testvar2 = x;
    std::cout << x << " " << y << std::endl;

    if (testSwap(testvar, testvar2) == 0){
       std::cout << "test finish without problems"<< std::endl;
    } else {
        std::cout << "test finish with problems" << std::endl;
    }


	return 0;
}
