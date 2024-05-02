#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));              // use current time as seed for random generator
    int mysteryNumber = std::rand() % 101; // random number between 0 and 100
    int guess;
    int attempts = 10; // number of attempts

    std::cout << "Welcome to the Mystery Number game!\n";
    std::cout << "Guess a number between 0 and 100. You have " << attempts << " attempts.\n";

    while (attempts > 0)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < mysteryNumber)
        {
            std::cout << "Too small!\n";
        }
        else if (guess > mysteryNumber)
        {
            std::cout << "Too big!\n";
        }
        else
        {
            std::cout << "Congratulations! You found the mystery number!\n";
            return 0;
        }

        --attempts;
        std::cout << "You have " << attempts << " attempts left.\n";
    }

    std::cout << "Sorry, you didn't find the mystery number. It was " << mysteryNumber << ".\n";
    return 0;
}