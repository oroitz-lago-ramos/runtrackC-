#include <iostream>

int main() {
    int n;
    float result{0.0f};

    std::cout << "Rentrez un chiffre n : ";
    std::cin >> n;

    for (int i{1}; i <= n; i++)
    {
        result += 1.0f / i;
    }

    std::cout << "La somme des " << n << " premiers termes de la série harmonique est : " << result << std::endl;

    return 0;
}