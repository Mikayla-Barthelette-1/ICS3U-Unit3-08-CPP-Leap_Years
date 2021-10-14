// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will see if a year is a leap year

#include <iostream>
#include <string>


int main() {
    // this function determines if the year is a leap year

    int yearEntered;
    std::string userInput;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> userInput;

    // process
    try {
        yearEntered = std::stoi(userInput);
        if (yearEntered % 4 == 0) {
            if (yearEntered % 100 == 0) {
                if (yearEntered % 400 == 0) {
                    std::cout << yearEntered << " is definitely a leap year!";
                } else {
                    std::cout << yearEntered << " is not a leap year.";
                }
            } else {
                    std::cout << yearEntered << " is not a leap year.";
            }
        } else {
                    std::cout << yearEntered << " is not a leap year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input!";
    }

    // output
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
