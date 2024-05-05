#include <iostream>
#include <string>

void reverseString(std::string &str)
{
    char *start = &str[0];
    char *end = &str[str.size() - 1];

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}

int main()
{
    std::string str = "Hello, World!";
    std::cout << "Before reverse: " << str << '\n';
    reverseString(str);
    std::cout << "After reverse: " << str << '\n';

    return 0;
}