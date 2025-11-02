#include <iostream>
#include <cmath>
#include <string>

void basicOperations(int num1, int num2);
void tempConverter(double value, std::string unit);

int main(void){
    std::cout << "=== Advanced Scientific Calculator ===\n";
    bool calculationDone {false};
    while (!calculationDone){
        std::cout << "1. Basic Operations (+, -, *, /, %)\n";
        std::cout << "2. Advanced Math (pow, sqrt)\n";
        std::cout << "3. Number Comparison\n";
        std::cout << "4. Temperature Converter\n";
        std::cout << "5. Area Calculator\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an option: ";
        
        int optionSelected{};
        std::cin >> optionSelected;
        
        switch(optionSelected){
            case 0:{
                calculationDone = true;
                break;
            }
            case 1: {
                std::cout << "Enter first number: ";
                int firstNumber{};
                std::cin >> firstNumber;
                int secondNumber{-1};
                
                do {
                    std::cout << "Enter second number: ";
                    std::cin >> secondNumber;
                }while (secondNumber <= 0);
                
                basicOperations(firstNumber, secondNumber);
                break;   
            }
            case 2: {
                std::cout << "Enter the first number: ";
                int firstNumber{};
                std::cin >> firstNumber;
                
                std::cout << "Enter the second number: ";
                int secondNumber{};
                std::cin >> secondNumber;
                
                std::cout << firstNumber << "^" << secondNumber << " = " << std::pow(firstNumber, secondNumber) << '\n';
                std::cout << "Square root of " << firstNumber << " = " << std::sqrt(firstNumber) << '\n';
                std::cout << "Square root of " << secondNumber << " = " << std::sqrt(secondNumber) << '\n';
                break;
            }
            case 3:{
                std::cout << "Enter the first number: ";
                int firstNumber{};
                std::cin >> firstNumber;
                
                std::cout << "Enter the second number: ";
                int secondNumber{};
                std::cin >> secondNumber;
                
                if (firstNumber > secondNumber)         std::cout << firstNumber << " is greater than " << secondNumber << '\n';
                else if (secondNumber > firstNumber)    std::cout << secondNumber << " is greater than " << firstNumber << '\n';
                else                                    std::cout << "Both numbers are equal\n";
                break;
            }
            case 4:{ 
                std::cout << "Enter your temperature value: ";
                double tempValue{};
                std::cin >> tempValue;
                std::cout << "Enter your unit: \n" << "1. Celcius\n" << "2. Fahrenheit\n" << "3. Kelvin\n";
                std::string unit{};
                std::cin >> unit;

                tempConverter(tempValue, unit);
                break;
            }
            case 5:{ 
                std::cout << "Choose the shape for which you want to calculate area\n";
                std::cout << "1. Square\n2. Rectange\n3.Triangle\n";
                unsigned int userInput{};
                std::cin >> userInput;
                
                switch (userInput){
                    case 1:{
                        std::cout << "Enter the side of square: ";
                        unsigned int squareSide{};
                        std::cin >> squareSide;
                        std::cout << "Area of the square having side " << squareSide << " is " << std::pow(squareSide, 2);
                        break;
                    }
                    case 2:{
                        std::cout << "Enter the length: ";
                        unsigned int length{};
                        std::cin >> length;
                        std::cout << "Enter the breadth: ";
                        unsigned int breadth{};
                        std::cin >> breadth;
                        
                        std::cout << "Area of the rectangle having length " << length << " and breadth " << breadth << " is " << length * breadth << '\n';
                        break;
                    }
                    case 3:{
                        std::cout << "Enter the length of base: ";
                        unsigned int base{};
                        std::cin >> base;
                        std::cout << "Enter the height: ";
                        unsigned int height{};
                        std::cin >> height;
                        
                        std::cout << "Area of the triangle = " << 0.5 * base * height << '\n';
                        break;
                    }
                }
            }
        }
        std::cout << "\n\n\n\n";
    }
    return 0;
}

void basicOperations(int num1, int num2){
    std::cout << "Results: \n";
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
    std::cout << num1 << " % " << num2 << " = " << num1 % num2 << '\n';
}

void tempConverter(double value, std::string unit){
    if (unit == "1") unit = "Celcius";
    else{
        if (unit == "2") unit = "Fahrenheit";
        if (unit == "3") unit = "Kelvin";
    } 

    if (unit == "Celcius"){
        std::cout << value << "°C = " << 1.8 * value + 32 << "°F\n";
        std::cout << value << "°C = " << 273.15 + value << "K\n";
    }
    if (unit == "Kelvin"){
        std::cout << value << "K = " << -273.15 + value << "°C\n";
        std::cout << value << "K = " << (value - 273.15) * 1.8 + 32 << "°F\n";
    }
    else if (unit == "Fahrenheit"){
        std::cout << value << "°F = " << (value - 32) / 1.8 << "°C\n";
        std::cout << value << "°F = " << (value - 32) / 1.8 + 273.15<< "K\n";
    }
}