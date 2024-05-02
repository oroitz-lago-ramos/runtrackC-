#include <iostream>
#include <algorithm>
#include <string>

bool isVowel(char c)
{
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    std::string str = "vive la plateforme !";
    std::cout << str << std::endl;
    str.erase(std::remove_if(str.begin(), str.end(), isVowel), str.end());
    std::cout << str << std::endl;

    return 0;
}