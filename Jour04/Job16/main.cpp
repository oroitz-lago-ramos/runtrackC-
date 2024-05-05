#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; 
    int max = arr[0];            
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); ++i)
    { 
        if (arr[i] > max)
        {                 
            max = arr[i]; 
        }
    }

    std::cout << "The maximum value is " << max << '\n';
    return 0;
}