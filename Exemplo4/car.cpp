#include "car.hpp"
#include <iostream>
using namespace std;

Car::Car(string brand, float speed, float accelerationInc):
    Vehicle(brand,speed){
    accelerationInc_=accelerationInc;
}
void Car::accelerate(){
    speed_ += accelerationInc_;    
}

void Car::doBreak(){
    speed_ -= accelerationInc_;
}