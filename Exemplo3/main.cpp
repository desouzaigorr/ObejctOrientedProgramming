#include <iostream>
#include "Dog.hpp"
int main(){

    Dog Fibi("Phoebe");
    std::cout << Fibi.name_ << "\n";
    Fibi.bark();

    return 0;
}