#include <iostream>
#include <variant>
#include <string>

int main()
{
    std::variant<int, std::string, double> array[] = {2019, "La Plateforme", 3.14, "Étudiants"};

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        std::cout << "Address of array[" << i << "]: " << &array[i] << ", Value: ";

        if (std::holds_alternative<int>(array[i]))
        {
            std::cout << std::get<int>(array[i]);
        }
        else if (std::holds_alternative<std::string>(array[i]))
        {
            std::cout << std::get<std::string>(array[i]);
        }
        else if (std::holds_alternative<double>(array[i]))
        {
            std::cout << std::get<double>(array[i]);
        }

        std::cout << '\n';
    }

    return 0;
}