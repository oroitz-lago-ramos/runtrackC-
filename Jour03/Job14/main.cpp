#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isPalindrome(const std::string &str)
{
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main()
{
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};

    std::cout << "Palindromes found:\n";
    for (const std::string &str : tab)
    {
        if (isPalindrome(str))
        {
            std::cout << str << '\n';
        }
    }

    return 0;
}