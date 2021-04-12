#ifndef PLANT
#define PLANT

#include <iostream>
#include <string>

using namespace std;

class Plant {
private:
    string plantName_;      // The name of your plant
    double waterFlow_;      // How much water to give at certain time (Capacity will be determined)
    int hour_;              // 1 - 24
    
public:
    // Constructors
    Plant();    // Default

    // Getters
    string getPlantName();
    double getWaterFlow();
    int getHour();

    // Setters
    void setPlantName(string);
    void setWaterFlow(int);
    void setHour(int);

    // Others
    void activate();
};


// ========================================== FUNCTION BODIES ==========================================

// --------------- CONSTRUCTORS ---------------
// Default value: UNIDENTIFIED name pouring 30 units of water at 12:00 PM
Plant::Plant(): plantName_("UNIDENTIFIED"), waterFlow_(30), hour_(12) {};


// --------------- GETTERS ---------------
string Plant::getPlantName() { return plantName_; }

double Plant::getWaterFlow() { return waterFlow_; }

int Plant::getHour() { return hour_; }



// --------------- SETTERS ---------------

void Plant::setPlantName(string plantName) { plantName_ = plantName; }

void Plant::setWaterFlow(int waterFlow) { waterFlow_ = waterFlow; }

void Plant::setHour(int hour) { hour_ = hour; }

// --------------- OTHERS ---------------
void Plant::activate() {    // Choice 1 of main menu
    cout << "Activating the machine" << endl;
}

#endif // PLANT