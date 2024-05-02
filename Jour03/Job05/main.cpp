#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string input;
    std::cout << "Please enter a time in the format XXhXX: ";
    std::getline(std::cin, input);

    std::regex timeFormat("\\b([01]?[0-9]|2[0-3])h([0-5][0-9])\\b");

    if (std::regex_match(input, timeFormat))
    {
        std::cout << "The time format is correct.\n";
    }
    else
    {
        std::cout << "The time format is incorrect.\n";
    }

    return 0;
}