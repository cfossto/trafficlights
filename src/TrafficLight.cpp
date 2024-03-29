//
// Created by Christopher Fossto on 2023-09-09.
//

#include <chrono>
#include <thread>
#include <cctype>
#include "TrafficLight.h"
#include "iostream"
using namespace std;

    string TrafficLight::changeRedLightToGreen(string current_status){

        string status = current_status;

        if(current_status == "Red"){

            red_light = true;
            yellow_light = true;
            cout << "Red-Yellow-mode activated! \n";
            cout << "Red and yellow.. \n";
            this_thread::sleep_for(3000ms);
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

    // Changing redlight to Red-mode if current status is Green.
    // Boolean lights are placeholders for GPIO-pins.
    string TrafficLight::changeGreenLightToRed(string current_status){

        string status = current_status;

        if (current_status == "Green"){

            green_light = false;
            yellow_light = true;
            cout << "Turning on red-mode! \n";
            this_thread::sleep_for(3000ms);
            yellow_light = false;
            red_light = true;
            status = "Red";
            cout << "Red! \n";
        }

        cout << "Red light on? " << (red_light ? "True":"False") << endl;
        return status;
    }