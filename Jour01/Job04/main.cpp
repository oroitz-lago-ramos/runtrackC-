#include <iostream>
int sum(int a, int b);

int main()
{
    std::cout << "Entrez le premier nombre : ";
    int a{0};
    std::cin >> a;
    std::cout << "Entrez le deuxième nombre : ";
    int b{0};
    std::cin >> b;

    std::cout << "The sum is " << sum(a, b) << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}