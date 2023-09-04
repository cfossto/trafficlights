#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

bool red_light = false;
bool yellow_light = false;
bool green_light = false;

string changeRedLightToGreen(string current_status){

    string status = current_status;

    if(current_status == "Red"){

        red_light = true;
        yellow_light = true;
        cout << "Red, Yellow-mode activated! \n";
        red_light = false;
        yellow_light = false;
        green_light = true;

        cout << "Green! \n";
        current_status = "Green";
    }

    else {
        cout << "Must come from red light \n";
        current_status = "Red";
    }

    cout << "Green light on?  "  << (green_light ? "True":"False") << endl;

    return current_status;
}

/*
void changeGreenLightToRed(){


}
*/

int main() {

    string current_status = "Red";

    string status = changeRedLightToGreen(current_status);
    cout << status;

    return 0;
}
