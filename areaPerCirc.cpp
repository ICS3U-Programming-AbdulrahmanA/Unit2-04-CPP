// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 8/01/2025
// Circle and area of a circle

#include <iostream>
#include <cmath>

int main() {
    float radius;
    std::cout << "Enter the radius of the circle (in cm): ";
    std::cin >> radius;

    // Calculate area and circumference
    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;

    // Display results
    std::cout << "Area of the circle: " << area << " cm^2" << std::endl;
    std::cout << "Circumference of the circle: " << circumference << " cm" << std::endl;
}
