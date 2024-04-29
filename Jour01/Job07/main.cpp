#include <iostream>
bool isPair(int n);

int main()
{
    std::cout << "Entrez un chiffre pour verifier si il es pair ou impair : ";
    int n{0};
    std::cin.clear();
    std::cin >> n;

    if (std::cin.good())
    {
        if (isPair(n))
        {
            std::cout << "Le chiffre rentré est pair" << std::endl;
        }
        else
        {
            std::cout << "Le chiffre rentré est impair" << std::endl;
        }
        return 0;
    }
    else
    {
        std::cout << "Erreur - Mauvais type de donnée" << std::endl;
        return 0;
    }
}

bool isPair(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}