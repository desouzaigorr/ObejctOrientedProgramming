#include <iostream>
#include "Dog.hpp"
int main(){
    Dog Fibi("Phoeb", 2);

    std::cout << Fibi.getName() << "\n";

    Fibi.setName("Phoebe");
    std::cout << Fibi.getName() << "\n";

    Fibi.bark();

    std::cout << Fibi.getAge() << "\n";

    Fibi.setAge(6);
    std::cout << Fibi.getAge() << "\n";
    
    return 0;
}