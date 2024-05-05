#include <iostream>

int main()
{
    int a{5};
    int b{14};
    int c{78};

    std::cout << a << " " << b << " " << c << std::endl;

    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    *ptrA = 74;
    *ptrB = 23;
    *ptrC = 5;
    std::cout << a << " " << b << " " << c << std::endl;
}