// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program outputs all integers from 1000 to 2000

#include <iostream>


int main() {
    // This program outputs all integers from 1000 to 2000

    // variables
    int red;
    int green;
    int blue;

    // process
    for (red = 0; red <= 255; red++) {
        for (green = 0; green <= 255; green++) {
            for (blue = 0; blue <= 255; blue++) {
                std::cout << "RGB is " << red << "," << green << "," << blue <<;
            }
        }
    }
}
