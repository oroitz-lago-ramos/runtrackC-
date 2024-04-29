#include <iostream>
#include <typeinfo>
#include <string>

int main(){
    char c = '\x01';
    char d = 'f';
    short int p = 10;
    

    /*
    si x initialisé en auto ---> x sera int
    sinon x short int
    x = p + 3 ----> x sera de type short int p;
    */
    auto x{p + 3};
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(x).name() << std::endl;

    /*
    short int x_bis{p + 3}; Ici nous aurons un Warning : narrowing conversion of '(((int)p) + 3)' from 'int' to 'short int' [-Wnarrowing]
     std::cout << typeid(x_bis).name() << std::endl;
     Peut-être que 3 est considéré int et non short;
    */

    /*
    y sera un int et calculera les caractères en fonction de leur valeur décimale
     ^a = 1 et f = 102 donc y = c + d + 1 = ^a + f + 1 = 1 + 102 + 1 = 104
     https://donsnotes.com/tech/charsets/ascii.html
    */
    auto y{c + d + 1};
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << y << std::endl;
    std::cout << typeid(y).name() << std::endl;

    /*
    De la meme façon que le précédent on prend leur valeur décimale
    */
   auto z{p + c};
   std::cout << z << std::endl;
   std::cout << typeid(z).name() << std::endl;

   /*
    De la meme façon que le précédent on prend leur valeur décimale.
    Si on force le type char le resultat est #, je ne sais pas a quoi cela correspond.
    Pour le std::string --> w -> # et type de w -> NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    */
   auto w{3 * p + 5 * c};
   std::cout << w << std::endl;
   std::cout << typeid(w).name() << std::endl;
   return 0;
}