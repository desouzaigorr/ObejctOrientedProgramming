#include <iostream>
#include "Dog.hpp"
int main(){

    Dog Fibi;
    Fibi.name = "Phoebe";
    std::cout << Fibi.name << "\n";
    Fibi.bark();

    return 0;
}