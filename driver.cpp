//  _____    _          ____  _          _
// |__  /___| |_ __ _  |  _ \| | ___  __| | __ _  ___ 
//   / // _ \ __/ _` | | |_) | |/ _ \/ _` |/ _` |/ _ \
//  / /|  __/ || (_| | |  __/| |  __/ (_| | (_| |  __/
// /____\___|\__\__,_| |_|   |_|\___|\__,_|\__, |\___|
//                                         |___/      
//  ____            _           _
// |  _ \ _ __ ___ (_) ___  ___| |_
// | |_) | '__/ _ \| |/ _ \/ __| __|
// |  __/| | | (_) | |  __/ (__| |_
// |_|   |_|  \___// |\___|\___|\__|
//               |__/

// Includes from files of local machines
#include "plant.hpp"
#include "functions.hpp"

// Standard library includes
#include <vector>
using namespace std;

int main() {

    // Declared variables go here
    vector<Plant> mySaves(3);
    int choice;
    
    // Introducing the user
    cout << BOLDGREEN << "-------------------------------------------" << endl;
    cout << "WELCOME TO YOUR AUTOMATIC WATERING MACHINE!" << endl;
    cout << "-------------------------------------------" << RESET << endl;
    moveOn();


    // do {
    //     cout << "Enter the corresponding number next to each choice followed by an enter" << endl;
    //     cout << "[1] Start watering my plants" << endl;
    //     cout << "[2] View saved plants" << endl;
    //     cout << "[3] Turn Off Machine" << endl;
    //     cin >> choice;
    // } while (choice != 3);



    // for (int i = 0 ; i < mySaves.size(); ++i) {
    //     cout << i + 1 << " " << mySaves[i].getPlantName() << endl;
    // }

    // View the screen (Start and options)g
    

    // If options, take user input

    // If start, choose which save (plant) to use to water plants


    
    return 0;
}