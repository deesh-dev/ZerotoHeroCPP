#include <iostream>
#include <iomanip>

int main(void){
    std::cout << "=== Personal Finance Calculator ===\n";
    
    std::cout << "Enter your monthly income: $";
    int monthlyIncome{};
    std::cin >> monthlyIncome;
    
    std::cout << "Enter your rent/mortgage: $";
    double rent{};
    std::cin >> rent;
    
    std::cout << "Enter your food expenses: $";
    double foodExpense{};
    std::cin >> foodExpense;
    
    std::cout << "Enter your transportation cost: $";
    double transporationCost{};
    std::cin >> transporationCost;
    
    std::cout << "Enter your entertainment budget: $";
    double entertainmentCost{};
    std::cin >> entertainmentCost;
    
    double totalExpenses {rent + foodExpense + transporationCost + entertainmentCost};
    double savings {monthlyIncome - totalExpenses};
    
    bool budgetMet{};
    if (savings >= 0) budgetMet = true;
    double savingsPercentage {savings/monthlyIncome * 100};
    
    std::cout << "\n\n\n";
    
    int defaultWidth {20};
    std::cout << std::left;
    std::cout << "=== Financial Summary ===\n";
    std::cout << std::setw(defaultWidth) << "Monthly income: " << '$' << monthlyIncome << '\n';
    std::cout << std::setw(defaultWidth) << "Total expenses: " << '$' << totalExpenses << '\n';
    std::cout << std::setw(defaultWidth) << "Savings: " << '$' << savings << '\n';
    std::cout << std::setw(defaultWidth) << "Savings Rate: " << savingsPercentage << "%\n";
    
    std::cout << "\n\n\n";
    
    std::cout << std::setw(defaultWidth) << "=== Variable Storage Information ===\n"; 
    std::cout << std::setw(defaultWidth) << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << std::setw(defaultWidth) << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << std::setw(defaultWidth) << "Size of bool: " << sizeof(bool) << " byte\n";
    std::cout << std::setw(defaultWidth) << "Size of char: " << sizeof(char) << " byte\n";
    
    std::cout << "\n\n\n";
    
    if (budgetMet) std::cout << "Budget Status: MET ✓" <<'\n';
    if (savings > 0) std::cout<< "Great job! You're saving money!\n";
    if (savings == 0) std::cout << "Try saving a bit the next time!\n";
    else if (savings < 0) std::cout << "Budget Status: EXCEEDED ✗" << '\n' << "Warning: You're overspending!\n";
    
    return 0;
}