#include <iostream>
#include <vector>

int main()
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> array(size);

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    std::cout << "Contents of the array:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << ' ';
    }

    return 0;
}