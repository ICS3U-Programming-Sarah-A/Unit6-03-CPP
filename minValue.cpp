// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 28th, 2022
// This program generates a 10 random number between 0 and 100. It then uses a
// loop to display what position the random number is at & displays the min
// value of the numbers generated.
#include <iostream>
#include <array>
#include <random>
#include <ctime>

// declare constants
const int MAX_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// this function checks to see the smallest item in the array
int findMinValue(std::array<int, MAX_SIZE > someArray) {
    int minValue = 101;
    minValue = someArray[0];

    for (int aNum : someArray) {
        if (aNum < minValue) {
            minValue = aNum;
        }
    }
    return minValue;
}


int main() {
    // initialize counter
    int counter = 0;

    // declare variable
    std::array<int, MAX_SIZE > randomNum;
    int minVal;

    // generates a random number
    srand(time(NULL));

    // determines the random number generated then displays it to the user.
    for (counter = 0; counter < MAX_SIZE; counter++) {
        int randomNumber = (rand() % (MIN_NUM, MIN_NUM + MAX_NUM));

        randomNum[counter] = randomNumber;
        std::cout << randomNum[counter];
        std::cout << " is added to the list at position " << counter;
        std::cout << std::endl;
    }

    // calls function & display the min value
    minVal = findMinValue(randomNum);
    std::cout << std::endl;
    std::cout << "The min value is: " << minVal;
}
