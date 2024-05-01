#include <iostream>
/*
int recursiveFactorial(int n) {
    if (n == 0)
    {
        return 1;
    }
    return n * recursiveFactorial(n - 1);

    Yes, the factorial function you've written uses recursion, which means it calls itself to calculate the factorial of a number. This can lead to a stack overflow if the input number is too large.

Each recursive call to factorial adds a new layer to the call stack. If n is large, the call stack can become too deep, causing a stack overflow.

To avoid this, you could use an iterative approach to calculate the factorial

}

*/
int iterativeFactorial(int n) {
    int result = 1;
    if (n == 0) {
        return result;
    }
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(){
    int n;
    std::cout << "Entrez le nombre entier n : ";
    std::cin >> n;
    if (std::cin.good() && n >= 0)
    {
        int result;
        result = iterativeFactorial(n);
        std::cout << n <<"! = " << result;
    } else 
    {
        std::cout << "Erreur : Entrez un entier positif svp";
    }
    return 0;
}