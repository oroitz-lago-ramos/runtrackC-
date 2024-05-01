#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "Rentrez un chiffre en argument";
    else
    {
        std::string nString = argv[1];
        int n = std::stoi(nString);
        for (int i{1}; i <= n; i++)
        {
            if (i % 5 == 0 && i % 3 == 0)
            {
                std::cout << "Le nombre " << i << " est divisible par 3 et par 5\n";
            }
            else if (i % 5 == 0)
            {
                std::cout << "Le nombre " << i << " est divisible par 5\n";
            }
            else if (i % 3 == 0)
            {
                std::cout << "Le nombre " << i << " est divisible par 3\n";
            }
            else
            {
                std::cout << i << "\n";
            }
        }
    }
    return 0;
}