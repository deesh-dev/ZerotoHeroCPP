#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main(void){
    std::cout << "Welcome to the program\n";
    bool morePeople {true};
    std::vector <std::string> names{};
    std::vector <int> ages{};
    std::vector <std::string> cities{};
    std::vector <std::string> hobbies{};
     
    while (morePeople){
        std::cout << "Name: ";
        std::string name{};
        std::getline(std::cin, name);
        names.push_back(name);
        
        
        std::cout << "Age: ";
        unsigned int age {};
        std::cin >> age;
        ages.push_back(age);
        
        std::cout << "City: ";
        std::string city{};
        std::cin >> city;
        cities.push_back(city);
        
        std::cout << "Favourite hobby: ";
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
    
    for (unsigned int i = 0; i < names.size(); i++) std::cout << std::setw(defaultSize * 2) << names[i] << std::setw(defaultSize) << ages[i] << std::setw(defaultSize) << cities[i] << std::setw(defaultSize) << hobbies[i] << '\n';
    
}