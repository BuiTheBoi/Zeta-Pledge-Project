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

//     o 
// .oo.Oo.
//    O. 
//     Ooo'
//  ___O___
//  \     /
//   \___/

//        _ _
//       (_\_)
//      (__<_{}
//       (_/_)
//      |\ |   
//       \\| /|
//        \|//
//         |/
//    ,.,.,|.,.,.
//    ^`^`^`^`^`^

// Includes from files of local machines
#include "plant.hpp"
#include "machine.hpp"
#include "accessories.hpp"

// Standard library includes
#include <vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    // Declared variables go here
    vector<Plant> mySaves(3);
    int choice, degreetMsg;
    string yesNo;
    
    // Introducing the user
    cout << BOLDGREEN << endl << endl
        << "-------------------------------------------" << endl;
    cout << "WELCOME TO YOUR AUTOMATIC WATERING MACHINE!" << endl;
    cout << "-------------------------------------------" << RESET << endl;
    cout << BOLDMAGENTA << "Powered by Zeta Pledge Class of ΘT" << RESET 
    << endl << endl << endl;
    moveOn();


    do {
        // Viewing main menu
        cout << BOLDBLUE << endl << endl
            << "-------------------------------------------" << endl;
        cout << "               MAIN MENU:                  " << endl;
        cout << "-------------------------------------------" << RESET << endl << endl;
        
        for (int i = 0 ; i < sizeof(menu)/sizeof(menu[0]); ++i) {
            cout << menu[i] << endl;
        }
        cout << YELLOW << "[Enter a number corresponding to each choice. Then press enter]" << RESET << endl;
        cin >> choice;
        system("clear");

        // Invalid inputs
        if (choice != 1 || choice != 2 || choice != 3) {
            cout << RED << "INVALID INPUT. PLEASE TRY AGAIN!" << RESET << endl;
            moveOn();
        }

        
        switch (choice) {
            case 1:     // Picking which plant save to water
                cout << "You chose 1" << endl;
                break;
            case 2:     // View all options
                view(mySaves);
                break;
            case 3:     // Ending program
                powerOff();
                break;
        }                
    } while (choice != 3);

     cout << BOLDRED << endl << endl
         << "-------------------------------------------" << endl;
    cout << "               POWERING OFF                " << endl;
    cout << "-------------------------------------------" << RESET << endl << endl;
    
    // Generator to produce a randomized degreet 
    // message each time machine is powered off...
    unsigned seed = time(0);
    srand(seed);
    int max = 4,
        min = 0;
    degreetMsg = rand() % (max - min + 1) + min;

    cout << MAGENTA << "\t" << degreetMsgList[degreetMsg] << RESET << endl << endl;

    return 0;
}