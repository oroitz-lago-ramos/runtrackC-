#include <iostream>
#include <string>
#include <vector>

struct Flight
{
    std::string destination;
    float flightTime;
};

int main()
{
    std::vector<Flight *> flights;

    int numFlights;
    std::cout << "Enter the number of flights: ";
    std::cin >> numFlights;
    std::cin.ignore(10000, '\n');

    for (int i = 0; i < numFlights; ++i)
    {
        Flight *flight = new Flight;
        std::cout << "Enter the destination for flight " << i + 1 << ": ";
        std::getline(std::cin, flight->destination);
        std::cout << "Enter the flight time for flight " << i + 1 << ": ";
        std::cin >> flight->flightTime;
        std::cin.ignore(10000, '\n');
        flights.push_back(flight);
    }

    for (Flight *flight : flights)
    {
        std::cout << "Flight to " << flight->destination << " takes " << flight->flightTime << " hours.\n";
        // Modify data if needed. For example:
        flight->flightTime += 1.0;
    }

    // Don't forget to delete the flights when you're done with them
    for (Flight *flight : flights)
    {
        delete flight;
    }

    return 0;
}