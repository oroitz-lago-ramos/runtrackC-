#include <iostream>

int main()
{
    int a, b;
    std::cout << "Entrez la valeur a : ";
    std::cin >> a;
    std::cout << "Entrez la valeur b : ";
    std::cin >> b;

    int i = a;
    while (i <= b)
    {
        std::cout << i << "\n";
        i++;
    }

    return 0;
}