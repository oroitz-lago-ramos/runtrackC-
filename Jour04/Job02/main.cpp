#include <iostream>

int main()
{
    int a{5};
    int b{15};

    std::cout << a << " " << b << std::endl;

    int *ptrA = &a;
    int *ptrB = &b;
    int temp = *ptrA;

    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << a << " " << b << std::endl;

    return 0;
}