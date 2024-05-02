#include <algorithm>
#include <string>
#include <iostream>

int main(){
    std::string str = "vive la plateforme !";
    std::cout << str << std::endl;
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << str << std::endl;
}

