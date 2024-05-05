#include <iostream>
#include <vector>
#include <string>

struct Note
{
    std::string firstName;
    std::string lastName;
    double score;
};

int main()
{
    std::vector<Note> notes;
    int choice;

    do
    {
        std::cout << "\n1. Add a note\n2. Display notes\n3. Delete a note\n4. Display average\n5. Quit\nEnter your choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            choice = 0;
            Note note;
            std::cout << "Enter first name: ";
            std::cin >> note.firstName;
            std::cout << "Enter last name: ";
            std::cin >> note.lastName;
            std::cout << "Enter score: ";
            std::cin >> note.score;
            notes.push_back(note);
        }
        else if (choice == 2)
        {
            choice = 0;
            for (const auto &note : notes)
            {
                std::cout << note.firstName << ' ' << note.lastName << ": " << note.score << '\n';
            }
        }
        else if (choice == 3)
        {
            choice = 0;
            std::string firstName, lastName;
            std::cout << "Enter first name: ";
            std::cin >> firstName;
            std::cout << "Enter last name: ";
            std::cin >> lastName;
            for (auto it = notes.begin(); it != notes.end(); ++it)
            {
                if (it->firstName == firstName && it->lastName == lastName)
                {
                    notes.erase(it);
                    break;
                }
            }
        }
        else if (choice == 4)
        {
            choice = 0;
            double sum = 0;
            for (const auto &note : notes)
            {
                sum += note.score;
            }
            std::cout << "Average score: " << (notes.empty() ? 0 : sum / notes.size()) << '\n';
        }
    } while (choice != 5);

    return 0;
}