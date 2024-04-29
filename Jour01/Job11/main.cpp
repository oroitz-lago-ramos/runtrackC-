#include <iostream>
#include <algorithm>

/*
Il y a une fonction swap qui est directement dans la bibliotèque stadart algorithm qui s'appelle swap
*/
void customSwap(int &n, int &m);
int main()
{
    std::cout << "Saissisez le nombre n : ";
    int n{0};
    std::cin >> n;
    std::cout << "Saissisez le nombre m : ";
    int m{0};
    std::cin >> m;

    std::cout << "---------------------------------------------------\n";

    customSwap(n, m);

    std::cout << "Maintenant n à pour valeur : " << n << "\n";
    std::cout << "Maintenant m à pour valeur : " << m << "\n";
    std::cout << "---------------------------------------------------\n";

    std::swap(n, m);

    std::cout << "Maintenant n à pour valeur : " << n << "\n";
    std::cout << "Maintenant m à pour valeur : " << m << "\n";

    return 0;
}

void customSwap(int &n, int &m)
{
    int temp{n};
    n = m;
    m = temp;
}

/*
Ici le custom swap modifie les valeurs en modifiant le contenu à leur adresse.
si on ne met pas le & leur valeur n'est pas modifié
car on crée des copies et on n'utilise pas la meme adresse.
Autres options pour le customSwap :

std::pair<int, int> myFunction() {
    return std::make_pair(1, 2);
}

ou

struct Result {
    int var1;
    int var2;
};

Result myFunction() {
    Result res;
    res.var1 = 1;
    res.var2 = 2;
    return res;
}
*/