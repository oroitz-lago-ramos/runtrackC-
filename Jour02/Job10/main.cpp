#include <iostream>
#include<math.h>

int main() {
    int num;
    std::cout << "Entre un entier positif : ";
    std::cin >> num;
    if (std::cin.good() && num >= 0)
    {
        float result;
        result = std::sqrt(num);
        std::cout << "La racine carrée de " << num << " est : " << result;
    } else {
        std::cout << "Rentrez un entier positif SVP";
    }
    return 0;
}