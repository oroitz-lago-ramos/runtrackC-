#include <iostream>
float calculatePrice(float prixHT, float poids, int tauxTVA);
int main()
{
    std::cout << "Entrez le prix HT d'un kilo de votre produit : ";
    float prixHT{0.0f};
    std::cin >> prixHT;

    if (!std::cin.good())
    {
        std::cout << "Erreur de saisie pour le prix HT" << std::endl;
        return 0;
    }

    std::cout << "Entrez le poids souhaité en kg : ";
    float poids{0.0f};
    std::cin >> poids;
    if (!std::cin.good())
    {
        std::cout << "Erreur de saisie pour le poids" << std::endl;
        return 0;
    }

    std::cout << "Entrez le taux TVA en % : ";
    float tauxTVA{0.0f};
    std::cin >> tauxTVA;
    if (!std::cin.good())
    {
        std::cout << "Erreur de saisie pour le taux TVA" << std::endl;
        return 0;
    }

    std::cout << "Le prix du produit TTC est de " << calculatePrice(prixHT, poids, tauxTVA) << " euros pour " << poids << " kg." << std::endl;
    return 0;
}

float calculatePrice(float prixHT, float poids, int tauxTVA)
{
    float prixTotal = prixHT * poids + prixHT * poids * (tauxTVA / 100.0f);
    return prixTotal;
}