#include <iostream>
#include <string>

int main()
{
    int entier{17};
    float flottant{3.14f};
    double reel{123.345};
    std::string caractere = "La Plateforme";

    std::cout << "Addresse de entier: " << &entier << ", Value: " << entier << '\n';
    std::cout << "Addresse de flottant: " << &flottant << ", Value: " << flottant << '\n';
    std::cout << "Addresse de reel: " << &reel << ", Value: " << reel << '\n';
    std::cout << "Addresse de caractere: " << &caractere << ", Value: " << caractere << '\n';

    return 0;
}