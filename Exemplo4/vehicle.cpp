#include "vehicle.hpp"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string brand, float speed = 0){
    Vehicle::setBrand(brand);
    Vehicle::setSpeed(speed);
}
void Vehicle::setBrand(string brand){
  brand_= brand;  
}
string Vehicle::getBrand(){
  return brand_;
}
void Vehicle::setSpeed(float speed){
  speed_= speed;  
}
float Vehicle::getSpeed(){
  return speed_;
}
void Vehicle::accelerate(){
   speed_++; 
}
void Vehicle::doBreak(){
  speed_--;
  speed_ = (speed_< 0)? 0 : speed_;  
}


