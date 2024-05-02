#include <iostream>

int main()
{
    int T[10];
    int max{T[0]};
    int index{0};

    std::cout << "Entrez 10 entiers :\n";
    for (int i{0}; i < 10; i++)
    {
        std::cin >> T[i];
        if (T[i] > max)
        {
            max = T[i];
            index = i;
        }
    }
    std::cout << "L'entier le plus grand se situe dans l'index : " << index;
    return 0;
}