#include <iostream>

int main(){
    int a,b;
    std::cout << "Entrez la valeur a : ";
    std::cin >> a;
    std::cout << "Entrez la valeur b : ";
    std::cin >> b;

    for (int i = a; i <= b; i++)
    {
        std::cout << i << "\n";
    }
    return 0;
}