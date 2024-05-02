#include <iostream>

int main ()
{
    int T[10];
    int count{0};

    std::cout << "Entrez 10 entiers :\n";
    for (int i{0}; i < 10; i++)
    {
        std::cin >> T[i];
        if (T[i] >= 5)
        {
            count++;
        }
    }
    std::cout << "Le nombre d'entiers >= 5 sont : " << count;
    return 0;
}