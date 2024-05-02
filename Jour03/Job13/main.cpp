#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> mergeSortedArrays(const std::vector<int> &arr1, const std::vector<int> &arr2)
{
    std::vector<int> merged(arr1.size() + arr2.size());
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());
    return merged;
}

int main()
{
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::vector<int> arr2 = {2, 4, 6, 8, 10};

    std::vector<int> merged = mergeSortedArrays(arr1, arr2);

    std::cout << "Merged array: ";
    for (int num : merged)
    {
        std::cout << num << ' ';
    }
    std::cout << '\n';

    return 0;
}