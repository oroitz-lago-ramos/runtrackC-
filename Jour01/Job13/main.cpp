#include <iostream>
#include <math.h>

int main() {
    int n{0};
    std::cout << "Rentrez un entier positif N : ";
    std::cin >> n;

    double sum{std::pow(5,3)};
    int iterationCount{0};
    std::cout << "La valeur initiale de la somme est " << sum << "\n";
    for (int i{6}; i <= n; i++)
    {
        sum += std::pow(i,3);
        iterationCount++;
        std::cout << "La valeur intermédiare à l'iteration nº " << iterationCount << " est " << sum << std::endl;
    }

    std::cout << "La valeur finale de la somme est " << sum;
    return 0;
}