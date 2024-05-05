#include <iostream>

int main()
{
    int number{2019};
    int *pointer = &number;
    std::cout << "Le pointeur est stocké dans l'adresse : " << &pointer << " pointe vers l'adresse : " << pointer << " dans laquelle est stocké la valeur " << *pointer << std::endl;
    return 0;
}