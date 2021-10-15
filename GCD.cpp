// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: Oct 2021
// This GCD program in c++

#include <iostream>
#include <string>

int main() {
    // this function finds the greatest common divisor(factor) of 2 #s
    // declaring
    int firstNumberAsInteger;
    int secondNumberAsInteger;
    int GCD;
    int counter;
    int smallerNumber;
    std::string firstNumberAsString;
    std::string secondNumberAsString;

    // input
    std::cout << "Enter the first integer: ";
    std::cin >> firstNumberAsString;
    std::cout << "Enter the second integer: ";
    std::cin >> secondNumberAsString;

    try {
        // convert string to integers
        firstNumberAsInteger = std::stoi(firstNumberAsString);
        secondNumberAsInteger = std::stoi(secondNumberAsString);

        // process and output
        if (firstNumberAsInteger > secondNumberAsInteger) {
            smallerNumber = secondNumberAsInteger;
        } else {
            smallerNumber = firstNumberAsInteger;
        } for (counter = 1; counter < smallerNumber + 1; counter++) {
            if (firstNumberAsInteger % counter == 0 &&
            secondNumberAsInteger % counter == 0) {
                GCD = counter;
            }
        }
        std::cout << "The GCD (greatest common divisor)"
        << " of these two numbers is " << GCD << "." << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Invalid input." << std::endl;
        }

        std::cout << "\nDone." << std::endl;
}
