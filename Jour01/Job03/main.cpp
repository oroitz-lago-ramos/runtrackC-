#include <iostream>

int main(){
    std::cout << "Enter a number of repetitions of Hello World n > 0 : ";
    unsigned int n{0};
    std::cin >> n;
    if (n <= 0)
        return 0;
    else {
        // for (int i{0}; i < n; i++)
        // {
        //     std::cout << "Hello World" << std::endl;
        // }
        while (n > 0) {
            std::cout << "Hello World" << std::endl;
            n--;
        }
    }
    return 0;
}