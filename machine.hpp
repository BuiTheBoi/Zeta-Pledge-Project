#pragma once

#include <string>
#include <iomanip>
#include <ctime>

#include "plant.hpp"

class Machine {
private:
    double waterCapacity_;
public:

    // Constructor
    Machine();      // By default the machine has NO water til it is detected

    // Getters
    bool waterDetected();
    string getTimeOfDay();
    double getWaterCapacity();

    // Setters
    void setWaterCapacity(double);

    //Others
    // void waterPlants();

};


// ========================================== FUNCTION BODIES ==========================================

// --------------- CONSTRUCTORS ---------------
Machine::Machine(){
    setWaterCapacity(0);

    // If there is water when powering on
    if (waterDetected()) {
        setWaterCapacity(getWaterCapacity());
    }
}


// --------------- GETTERS ---------------
bool Machine::waterDetected() {
    if (waterCapacity_ != 0) return true;
    else return false;
}

string Machine::getTimeOfDay() {
    return "Will be determined\n";
}

// --------------- SETTERS ---------------

void Machine::setWaterCapacity(double waterCapacity) { waterCapacity_ = waterCapacity; }

double Machine::getWaterCapacity() { return waterCapacity_; }

// --------------- OTHERS ---------------
