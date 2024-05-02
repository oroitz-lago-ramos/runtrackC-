#include <iostream>
#include <vector>

int sumEvenElements(const std::vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    std::vector<int> arr;
    int input;
    std::cout << "Please enter integers (enter a non-integer to stop):\n";
    while (std::cin >> input)
    {
        arr.push_back(input);
    }

    int sum = sumEvenElements(arr);
    std::cout << "The sum of the even elements is: " << sum << "\n";

    return 0;
}