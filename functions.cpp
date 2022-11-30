// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program calculates the area of a triangle using functions

#include <iostream>

void CalculateArea(int base, int height) {
    // calculate area
    int area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area is " << area << "cm²" << std::endl;
}

main() {
    // this function gets length and width

    std::string baseFromUser;
    std::string heightFromUser;
    int base;
    int height;

    // input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> baseFromUser;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> heightFromUser;
    std::cout << std::endl;

    // try and catch
    try {
        base = std::stoi(baseFromUser);
        height = std::stoi(heightFromUser);
        CalculateArea(base, height);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;

    // call functions
    CalculateArea(base, height);
}
