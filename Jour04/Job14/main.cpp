#include <iostream>

int main()
{
    int x = 12;
    std::cout << "x = " << x << "\n";
    
    int &ref = x;
    ref = 45;
    std::cout << "x = " << x << "\n";
}