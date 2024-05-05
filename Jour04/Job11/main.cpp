#include <iostream>
#include <string>

int main()
{
    std::string fruits[5] = {"pomme", "banane", "orange", "kiwi", "fraise"};
    std::cout << "Contenu du tableau fruit :" << std::endl;
    for (const std::string &fruit : fruits)
    {
        std::cout << fruit << std::endl;
    }
    int tailleFavoris;
    std::cout << "Combien de fruits preferez-vous ? ";
    std::cin >> tailleFavoris;
    std::string *favoris = new std::string[tailleFavoris];
    std::cout << "Entrez vos " << tailleFavoris << " fruits favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i)
    {
        std::cout << "Fruit " << i + 1 << " : ";
        std::cin >> favoris[i];
    }
    std::cout << "Contenu du tableau favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i)
    {
        std::cout << favoris[i] << std::endl;
    }
    delete[] favoris;

    return 0;
}