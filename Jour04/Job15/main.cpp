#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    for (int &ref : arr)
    {
        std::cout << ref << ' ';
    }

    return 0;
}