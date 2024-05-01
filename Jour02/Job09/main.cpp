#include <iostream>

int main(){
    int a = 54;
    int b = 137;
    int userInput;
    std::cout << "Entrez un chiffre : ";
    std::cin >> userInput;

    if (userInput >= a && userInput <= b)
    {
        std::cout << "GAGNE";
    } else 
    {
        std::cout << "PERDU";
    }
    return 0;
}