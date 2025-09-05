#include <iostream>
#include "car.hpp"
using namespace std;

int main(){
    Car myCar("bmw", 100, 10);
     cout << myCar.getBrand() << " " <<myCar.getSpeed() << "\n";
     myCar.accelerate();
     cout << myCar.getBrand() << " " <<myCar.getSpeed() << "\n";
     myCar.accelerate();
     cout << myCar.getBrand() << " " <<myCar.getSpeed() << "\n";
     myCar.doBreak();
     cout << myCar.getBrand() << " " <<myCar.getSpeed() << "\n";
     myCar.doBreak();
     cout << myCar.getBrand() << " " <<myCar.getSpeed() << "\n";  
    // Vehicle myVehicle("Yamaha", 0);
    // cout << myVehicle.getBrand() << " " <<myVehicle.getSpeed() << "\n";  
    // myVehicle.accelerate();
    // cout << myVehicle.getBrand() << " " <<myVehicle.getSpeed() << "\n";  
    // myVehicle.doBreak();
    // cout << myVehicle.getBrand() << " " <<myVehicle.getSpeed() << "\n";  
    // myVehicle.doBreak();
    // cout << myVehicle.getBrand() << " " <<myVehicle.getSpeed() << "\n";  
    return 0;

}