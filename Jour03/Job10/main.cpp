#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string string1;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, string1);

    std::string string2 = "Bonjour";

    if (string1 < string2)
    {
        std::cout << string1 << ", " << string2 << "\n";
    }
    else
    {
        std::cout << string2 << ", " << string1 << "\n";
    }

    return 0;
}