#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main(void){
    std::cout << "=== Welcome to Profile Creator ===";
    bool morePeople {true};
    std::vector <std::string> names{};
    std::vector <int> ages{};
    std::vector <std::string> cities{};
    std::vector <std::string> hobbies{};
     
    while (morePeople){
        std::cout << "Enter your full name: ";
        std::string name{};
        std::getline(std::cin, name);
        names.push_back(name);
        
        
        std::cout << "Enter your age: ";
        unsigned int age {};
        std::cin >> age;
        ages.push_back(age);
        
        std::cout << "Enter your city: ";
        std::string city{};
        std::cin >> city;
        cities.push_back(city);
        
        std::cout << "Enter your favourite hobby: ";
        std::string hobby{};
        std::cin >> hobby;
        hobbies.push_back(hobby);
        
        std::cout << "Anyone left? (Type 'y' or 'n'): ";
        char userInput{};
        std::cin >> userInput;
        std::cin.ignore();
        
        if (userInput == 'n') morePeople = false;
    }
    const int defaultSize{10}; 
    
    std::cout << std::left; //Making the text left-justified.
    // Printing out values to the console while setting their width.
    std::cout << std::setw(defaultSize * 2) << "Name" << std::setw(defaultSize) << "Age" << std::setw(defaultSize) << "City" << std::setw(defaultSize * 2) << "Favourite Hobby" << '\n';
    
    //Loop which will take elements from every vector and print to the console nicely.
    for (unsigned int i = 0; i < names.size(); i++) std::cout << std::setw(defaultSize * 2) << names[i] << std::setw(defaultSize) << ages[i] << std::setw(defaultSize) << cities[i] << std::setw(defaultSize) << hobbies[i] << '\n';
    
}