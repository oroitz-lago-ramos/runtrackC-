#include <iostream>
void withWhile(int &som)
{
    int i, n;
    i = 0;
    while (i < 4)
    {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        som += n;
        i++;
    }
    std::cout << "Somme : " << som << std::endl;
}
void withDoWhile(int &som)
{
    int i, n;
    i = 0;
    do
    {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        som += n;
        i++;
    } while (i < 4);
    std::cout << "Somme : " << som << std::endl;
}
void withFor(int &som)
{
    int i, n;
    for (i = 0; i < 4; i++)
    {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        som += n;
    }
    std::cout << "Somme : " << som << std::endl;
}
int main()
{
    int som;
    som = 0;
    withDoWhile(som);
    return 0;
}