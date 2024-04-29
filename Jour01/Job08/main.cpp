#include <iostream>

bool isBisextile(int year);

int main()
{
    std::cout << "Entrez l'année que vous voulez vérifier : ";
    int year{0};
    std::cin >> year;

    if (std::cin.good() && year >= 0)
    {
        if (isBisextile(year))
        {
            std::cout << "L'année " << year << " est bisextile" << std::endl;
        }
        else
        {
            std::cout << "L'année " << year << " n'est pas bisextile" << std::endl;
        }
        return 0;
    }
    else
    {
        std::cout << "Veuillez rentrer une année valide" << std::endl;
        return 0;
    }
}

bool isBisextile(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}