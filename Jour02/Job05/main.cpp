#include <iostream>

int main() {
    int note{0};
    std::cout << "Veuillez renter la note a tester : ";
    std::cin >> note;

    if (10 < note && note <= 20)
    {
        std::cout << "Validé";
    }
    else if (0 <= note && note < 10)
    {
        std::cout << "Non validé";
    }
    else
    {
        std::cout << "Note non valide, rentrez une notre entre 0 et 20";
    }
    return 0;
}