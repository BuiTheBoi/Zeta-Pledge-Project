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
#include "accessories.hpp"

// Standard library includes
#include <vector>
using namespace std;

int main() {

    // Declared variables go here
    vector<Plant> mySaves(3);
    string menu[3] = {
                    "[1] Start watering my plants",
                    "[2] View saved plants",
                    "[3] Power Off Machine"
                    };
    int choice;
    
    // Introducing the user
    cout << BOLDGREEN << endl << endl
        << "-------------------------------------------" << endl;
    cout << "WELCOME TO YOUR AUTOMATIC WATERING MACHINE!" << endl;
    cout << "-------------------------------------------" << RESET << endl;
    moveOn();


    // Viewing main menu
    cout << BOLDBLUE << endl << endl
         << "-------------------------------------------" << endl;
    cout << "               MAIN MENU:                  " << endl;
    cout << "-------------------------------------------" << RESET << endl << endl;

    do {
        for (int i = 0 ; i < sizeof(menu)/sizeof(menu[0]); ++i) {
            cout << menu[i] << endl;
        }
        cout << YELLOW << "[Enter a number corresponding to each choice. Then press enter]" << RESET << endl;
        cin >> choice;

        // Invalid inputs
        if (choice != 1 || choice != 2 || choice != 3) {
            system("clear");
            cout << RED << "INVALID INPUT. PLEASE TRY AGAIN!" << RESET << endl;
            moveOn();
        }

        if (isdigit(choice) == false) {
            cout << "NOT A DIGIT" << endl;
        }
        
        switch (choice) {
            case 1:
                system("clear");
                cout << "You chose 1" << endl;
                break;
            case 2:
                system("clear");
                cout << "You chose 2" << endl;
                break;
            case 3:
                system("clear");
                cout << "You chose 3" << endl;
                break;                
        }

    } while (choice != 3);

    // If options, take user input

    // If start, choose which save (plant) to use to water plants


    
    return 0;
}