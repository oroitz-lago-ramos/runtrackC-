#include <iostream>
void printTable(int n);
int main(){
    std::cout << "Rentrez le chiffre dont vous voulez la table de multiplication : ";
    int n{0};
    std::cin >> n;
    printTable(n);
    return 0;
}

void printTable(int n){
    for (int i{1}; i<=10; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
}
