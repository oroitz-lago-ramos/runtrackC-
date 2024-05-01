#include <iostream>

void fibonacci(int limit)
{
    int first = 0, second = 1, next;

    std::cout << "Fibonacci sequence up to " << limit << ":\n";
    std::cout << first << " " << second << " ";

    next = first + second;
    while (next <= limit)
    {
        std::cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }

    std::cout << std::endl;
}

int main()
{
    int limit;

    std::cout << "Enter the limit for the Fibonacci sequence: ";
    std::cin >> limit;

    fibonacci(limit);

    return 0;
}
