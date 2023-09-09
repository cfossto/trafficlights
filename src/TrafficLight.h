//
// Created by Christopher Fossto on 2023-09-09.
//
#include "iostream"
#ifndef TRAFFICLIGHTS_TRAFFICLIGHT_H
#define TRAFFICLIGHTS_TRAFFICLIGHT_H

class TrafficLight{

private:

    bool red_light = false;
    bool yellow_light = false;
    bool green_light = false;

public:

    TrafficLight(){
    }

    std::string changeRedLightToGreen(std::string current_status);

    // Changing redlight to Red-mode if current status is Green.
    // Boolean lights are placeholders for GPIO-pins.
    std::string changeGreenLightToRed(std::string current_status);
};

#endif //TRAFFICLIGHTS_TRAFFICLIGHT_H
