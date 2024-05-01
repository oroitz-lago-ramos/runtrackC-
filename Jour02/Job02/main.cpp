#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    switch (n)
    {
    case 0:
        std::cout << "Nul\n";
    case 1:
    case 2:
        std::cout << "Petit\n";
        break;
    case 3:
    case 4:
    case 5:
        std::cout << "Moyen\n";
    default:
        std::cout << "Grand\n";
    }
    return 0;
}
/*
        !!!ATTENTION!!!
Si dans le case il n'y a pas de break,
il va executer toutes les actions des autres cases jusqu'a trouver un break.

Resultats:
Pour n = 0 -> Nul et Petit
Pour n = 1 -> Petit
Pour n = 4 -> Moyen et Grand
Pour n = 10 -> Grand
Pour n = -5 -> Grand

*/