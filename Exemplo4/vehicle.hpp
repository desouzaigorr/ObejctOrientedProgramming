#pragma once
#include <string>
using namespace std;

class Vehicle{
    public:
        Vehicle(string brand, float speed);// construtor com seus parametros de entrada(brand e speed)
        void setBrand(string brand);
        string getBrand();
        void setSpeed(float speed);
        float getSpeed();    
        void accelerate();
        void doBreak();
    protected:
        string brand_; // brand_ um atributo da classe
        float speed_; //  speed_ um atributo da classe
};