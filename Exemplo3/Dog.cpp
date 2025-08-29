#include "Dog.hpp"
#include <iostream>
using namespace std;

//start .cpp
Dog::Dog(string name)
{
 name_= name;
}

void Dog::bark(){
    cout << "Woof\n";
}
//end .cpp