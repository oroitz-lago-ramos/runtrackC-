#include <iostream>

int main()
{
    int array[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        std::cout << "Address of array[" << i << "]: " << &array[i]
                  << ", Value: " << array[i] << '\n';
    }

    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    return 0;
}