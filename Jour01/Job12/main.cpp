#include <iostream>

int main() {
    int sum{0};
    for (int i{0}; i < 5; i++)
    {
        std::cout << "Entrez le numero : ";
        int num{0};
        std::cin >> num;
        sum += num;
    }
    std::cout << "La moyenne est de " << static_cast<float>(sum) / 5  << std::endl;
    // float(sum / 5) j'ai utilisé ceci mais le cast est fait apres la division donc est inutile
    // On utilisera alors static_cast<float>(sum)
    return 0;
}