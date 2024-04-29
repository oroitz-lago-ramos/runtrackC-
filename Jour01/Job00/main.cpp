#include <iostream>

int main(){
    // https://learn.microsoft.com/fr-fr/cpp/c-language/precedence-and-order-of-evaluation?view=msvc-170
    int aTest;
    int a;
    int b{0};
    int c{5};
    int d{6};
    int n{1};
    int p{6};
    int i{18};
    int x{15};
    int y{15};

    a = x + 5;
    std::cout << a << std::endl;

    a = x = y + 2;
    std::cout << a << std::endl;

    a = x==y;
    std::cout << a << std::endl;

    a = a<b && c<d;
    std::cout << a << std::endl;

    a = i++ * (n+p);
    std::cout << a << std::endl;

    return 0;

}
