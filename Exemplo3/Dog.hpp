#pragma once
#include <string>

//start .hpp
class Dog {
    private:
        std::string name_;
        int age_;
        void digestion();
    public:
        Dog(std::string name, int age);
        void bark();    
        void setName(std::string name);
        std::string getName(); 
        void setAge(int age);
        int getAge();
};
//end .hpp