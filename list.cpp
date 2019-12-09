// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>
#include <array>

template<size_t N>
int Addition(std::array<int, N> numbers) {
    // This program adds
    int addedNumber = 0;


    addedNumber = numbers[0] + numbers[1];
    numbers[2] = addedNumber;

    return addedNumber;
}


template<size_t N>
int Subtraction(std::array<int, N> numbers) {
    // This program subtracts
    int subtractedNumber = 0;


    subtractedNumber = numbers[0] - numbers[1];
    numbers[3] = subtractedNumber;

    return subtractedNumber;
}


template<size_t N>
int Multiplication(std::array<int, N> numbers) {
    // This program multiplies
    int multipliedNumber = 0;


    multipliedNumber = numbers[0] * numbers[1];
    numbers[4] = multipliedNumber;

    return multipliedNumber;
}


int main() {
    // calls other functions
    std::array<int, 5> numbers;
    std::string firstNumberFromUser;
    int firstNumber = 0;
    std::string secondNumberFromUser;
    int secondNumber = 0;
    int addedNumber;
    int subtractedNumber;
    int multipliedNumber;

    while (true) {
        std::cout << "Input a number: ";
        std::cin >> firstNumberFromUser;

        std::cout << "Input another number: ";
        std::cin >> secondNumberFromUser;

        try {
            firstNumber = std::stoi(firstNumberFromUser);
            secondNumber = std::stoi(secondNumberFromUser);

            numbers[0] = firstNumber;
            numbers[1] = secondNumber;

            addedNumber = Addition(numbers);
            subtractedNumber = Subtraction(numbers);
            multipliedNumber = Multiplication(numbers);

            numbers[2] = addedNumber;
            numbers[3] = subtractedNumber;
            numbers[4] = multipliedNumber;

            std::cout << "" << numbers[0] << " + " << numbers[1] <<
                        " = " << numbers[2] << std::endl;
            std::cout << "" << numbers[0] << " - " << numbers[1] <<
                        " = " << numbers[3] << std::endl;
            std::cout << "" << numbers[0] << " x " << numbers[1] <<
                        " = " << numbers[4] << std::endl;
            break;
        } catch (std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
