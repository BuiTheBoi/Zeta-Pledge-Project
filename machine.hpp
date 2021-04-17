#include "plant.hpp"
#include "accessories.hpp"

#ifndef MACHINE
#define MACHINE

#include <string>
#include <iomanip>
#include <ctime>

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
    void waterPlants(Plant&);
    void activate(vector<Plant>&);
};


// ========================================== FUNCTION BODIES ==========================================

// --------------- CONSTRUCTORS ---------------
Machine::Machine() {
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
void Machine::waterPlants(Plant& myPlant) {
    waterCapacity_ -= myPlant.getWaterFlow();
}

void Machine::activate(vector<Plant>& plants) {
    int plantToWater;
    
    // Printing menu
    cout << BOLDBLUE << "Plant to Water:" << RESET << endl << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "[" << i + 1 << "]" << plants[i].getPlantName() << endl;
    }
    cout << YELLOW << "[Enter the corresponding plant number to water]" << RESET << endl;
    cin >> plantToWater;
    system("clear");

    timer();
    waterPlants(plants[plantToWater]);
    

}


#endif  // Machine