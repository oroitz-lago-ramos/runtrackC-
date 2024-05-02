#include <iostream>
#include <string>

bool isSubstring(const std::string &s1, const std::string &s2)
{
    return s2.find(s1) != std::string::npos;
}

int main()
{
    std::string str1, str2;
    std::cout << "Please enter the first string: ";
    std::getline(std::cin, str1);
    std::cout << "Please enter the second string: ";
    std::getline(std::cin, str2);

    if (isSubstring(str1, str2))
    {
        std::cout << "The first string is a substring of the second.\n";
    }
    else
    {
        std::cout << "The first string is not a substring of the second.\n";
    }

    return 0;
}