#include <iostream>
#include <string>
#include <limits>

struct Staff
{
    std::string nom;
    std::string prenom;
};

struct Etudiant
{
    std::string nom;
    std::string prenom;
};

int main()
{
    Staff staff1 = {"Cordial", "Alicia"};
    Staff staff2 = {"Malardier", "Pierre"};

    std::cout << "Staff members: " << staff1.prenom << ", " << staff2.prenom << std::endl;

    int numEtudiants;
    std::cout << "Enter the number of students: ";
    std::cin >> numEtudiants;
    std::cin.ignore(10000, '\n');

    Etudiant *etudiants = new Etudiant[numEtudiants];

    for (int i = 0; i < numEtudiants; ++i)
    {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::getline(std::cin, etudiants[i].nom);
        std::cout << "Enter the first name of student " << i + 1 << ": ";
        std::getline(std::cin, etudiants[i].prenom);
    }

    std::cout << "Student first names: ";
    for (int i = 0; i < numEtudiants; ++i)
    {
        std::cout << etudiants[i].prenom << ' ';
    }

    delete[] etudiants;

    return 0;
}