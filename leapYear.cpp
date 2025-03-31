// Copyright 2025 (c) All rights reserved
// Created by: Gustav I
// Created on: March 31, 2025
// This program checks if the year entered is a leap year.

// Libraries
#include <iostream>

// Function defined
int main() {
    int year;

    // Input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Try catch (Input validation)
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid year." << std::endl;
        return 1;  // Indicate an error
    }

    //  Nested if statement to see if input is a leap year or not.
    //  (Divisible by 4, 100, 400).
    if (year % 4 == 0) {  // Year divisible by 4?
        if (year % 100 == 0) {  // Year divisible by 100?
            if (year % 400 == 0) {  // Year divisible by 400?
                std::cout << year << " is a leap year." << std::endl;
            } else {
                std::cout << year << " is not a leap year." << std::endl;
            }
        } else {
            std::cout << year << " is a leap year." << std::endl;
        }
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;  // Indicate success
}
