#include <iostream>

int main()
{
    int n;
    do
    {
    } while (
        std::cout << "Nombre > 0 ",
        std::cin >> n,
        n <= 0
    );
    return 0;
}