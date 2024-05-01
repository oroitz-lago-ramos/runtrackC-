#include <iostream>
#include <string>
#include <math.h>

bool isNarcissistic(int n) {
    std::string nStr = std::to_string(n);
    int len = nStr.length();
    int sum{0};

    for (char c : nStr){
        int digit = c - '0';
        sum += std::pow(digit, len);
    }

    return (sum == n);

}
int main(){
    int n;
    std::cout << "Entrez un nombre a tester : ";
    std::cin >> n;

    if (isNarcissistic(n)) {
        std::cout << "True";
    } else{
        std::cout << "False";
    }
    return 0;
}