#include <iostream>
#include <iomanip>


int main()
{
    const std::string green = "\033[32m";
    const std::string reset = "\033[0m";

    std::cout << green << std::setw(4) << "x |";
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << std::setw(4) << i << " ";
    }
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << std::setw(2) << i << " |";
        for (int j = 1; j <= 10; ++j)
        {
            std::cout << std::setw(4) << i * j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}