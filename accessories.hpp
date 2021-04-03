#include<iostream>
#include<string>

using namespace std;

// the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
// Reference: https://stackoverflow.com/questions/9158150/colored-output-in-c/9158263
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
// --------------------------------------------------------------------------

string menu[3] = {
    "[1] Start Watering My Plants",
    "[2] View Saved Plants",
    "[3] Power Off Machine"
};

string degreetMsgList[5] = {
    "Have a beautiful day!",
    "Cheers!",
    "See you next time!",
    "Good bye!",
    "Thank you for your time!"
};

// Prompts the user to press the enter key 
// to move on to the next screen
void moveOn(){
    cout << YELLOW << "[Press the enter key to continue]" << RESET << endl;
    string empty;
    getline(cin, empty);
    system("clear");
}

// Choice 2 of main menu
void view() {
    cout << "You chose 2" << endl;
    moveOn();
}