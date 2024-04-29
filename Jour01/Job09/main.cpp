#include <iostream>
#include <algorithm>

/*
Here we have two ways, we can use max method from the standart library or make a custom function.
Here I will try both
*/

int maxValue(int a, int b, int c);

int main() {
    std::cout << "Entrez trois chiffres espacés par un espace : ";
    int num1{0}, num2{0}, num3{0}, extra{0};
    std::cin >> num1 >> num2 >> num3;

    if (std::cin.good()){
        if (std::cin >> extra)
        {
            std::cout << "Trop de chiffres entrés" << std::endl;
            return 0;
        }
        int customMax = maxValue(num1, num2, num3);
        int standartMax = std::max({num1, num2, num3});

        std::cout << "Le chiffre le plus grand custom : " << customMax << std::endl;
        std::cout << "Le chiffre le plus grand standart : " << standartMax << std::endl;
        return 0;
    }
    else {
        std::cout << "Saisie invalide" << std::endl;
        return 0;
    }
}

int maxValue(int a, int b, int c) {
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}
