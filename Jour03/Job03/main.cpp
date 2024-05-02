#include <iostream>
#include <string>

bool isDifferent(std::string s, std::string t)
{
    return (s==t) ? 0 : 1;
}
int main() 
{
    std::string str1 = "Hello World";
    std::string str2 = "Hello World";
    std::string str3 = "Vive Jul";

    std::cout << "str1 = " << str1 << "\n";
    std::cout << "str2 = " << str2 << "\n";
    std::cout << "str3 = " << str3 << "\n";

    std::cout << "Comparaison en str1 et str2 : " << isDifferent(str1, str2) << std::endl;
    std::cout << "Comparaison en str2 et str3 : " << isDifferent(str2, str3) << std::endl;
    return 0;
}