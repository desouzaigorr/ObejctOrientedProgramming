#pragma once
#include <string>
#include "vehicle.hpp"
using namespace std;

class Car : public Vehicle {

    public:
        Car(string brand, float speed, float acceterationInc);
        float accelerationInc_;
        void accelerate();
        void doBreak();

};