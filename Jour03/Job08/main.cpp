#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, input);

    char tab[100];
    std::copy(input.begin(), input.end(), tab);
    tab[input.size()] = '\0';

    std::cout << "The string in the array is: " << tab << "\n";

    return 0;
}