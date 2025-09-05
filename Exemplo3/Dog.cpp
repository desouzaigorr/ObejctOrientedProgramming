#include "Dog.hpp"
#include <iostream>
using namespace std;

//start .cpp
Dog::Dog(string name, int age)
{
    Dog::setName(name);
    Dog::setAge(age);
}

void Dog::bark(){
    cout << "Woof\n";
    digestion();
}

void Dog::digestion(){
    cout << "Digerindo\n";
}

void Dog::setName(std::string name){
    name_ = name; 
}

std::string Dog::getName(){
    return name_;
} 

void Dog::setAge(int age){
    if (age < 0){
        
        throw std::invalid_argument("Age can not be negative");
    }
    else{
        age_= age;
    }
}

int Dog::getAge(){
    return age_;
}
//end .cpp