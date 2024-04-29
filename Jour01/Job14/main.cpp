
#include <iostream>
#include <string>

int main()
{
    int num{0};
    std::cout << "Entrez un chiffre à inverser : ";
    std::cin >> num;

    std::string numString = std::to_string(num);
    std::string result{""};

    for (int i = static_cast<int>(numString.length()) - 1; i >= 0; i--)
    {
        result += numString[i];
    }

    std::cout << "Le resultat est " << result;
    return 0;
}
/*
Or:


 for (std::string::size_type i = numString.length() - 1; i > 0;)
    {
        result += numString[i--];
    }
but this lead to an error, the last is not supperted because size_type is unsigned
*/
