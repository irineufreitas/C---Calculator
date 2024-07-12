#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>

// Calculator class definition
class Calculator {
public:
    virtual double addition(double num1, double num2) {
        return num1 + num2;
    }

    virtual double subtraction(double num1, double num2) {
        return num1 - num2;
    }

    virtual double multiplication(double num1, double num2) {
        return num1 * num2;
    }

    virtual double division(double num1, double num2) {
        if (num2 == 0) {
            std::cerr << "Error: Division by zero!\n";
            return 0;
        }
        return num1 / num2;
    }
};

// Derived class AdvancedCalculator
class AdvancedCalculator : public Calculator {
public:
    double addition(double num1, double num2) override {
        return num1 + num2; 
    }

    double subtraction(double num1, double num2) override {
        return num1 - num2; 
    }

    double multiplication(double num1, double num2) override {
        return num1 * num2; 
    }

    double division(double num1, double num2) override {
        return num1 / num2; 
    }

    
};

// Function to display the calculation history
void displayHistory(const std::vector<std::string>& history) {
    std::cout << "\nCalculation History:\n";
    for (const std::string& entry : history) {
        std::cout << entry << '\n';
    }
}

// Main function
int main() {
    Calculator* calc = new AdvancedCalculator();
    char op;
    double num1, num2, result = 0;
    char cont;
    std::vector<std::string> history;

    std::cout << "*********** CALCULATOR ***********\n";

    do {
        bool validOperator = false;
        while (!validOperator) {
            std::cout << "Enter either (+ - * /): ";
            std::cin >> op;
            if (op == '+' || op == '-' || op == '*' || op == '/') {
                validOperator = true;
            } else {
                std::cerr << "Please enter a valid symbol (+ - * /)\n";
                }
            }
        

        std::cout << "Enter #1: ";
        std::cin >> num1;

        std::cout << "Enter #2: ";
        std::cin >> num2;

        switch (op) {
            case '+':
                result = calc->addition(num1, num2);
                break;
            case '-':
                result = calc->subtraction(num1, num2);
                break;
            case '*':
                result = calc->multiplication(num1, num2);
                break;
            case '/':
                result = calc->division(num1, num2);
                break;
            default:
                std::cerr << "Please enter a valid symbol (+ - * /)\n";
                continue; // Skip the rest of the loop and prompt again
        }

         // Set the precision to 2 decimal places
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The result is: " << result << '\n';

        // Add result to history with 2 decimal places precision
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2) << num1 << " " << op << " " << num2 << " = " << result;
        history.push_back(oss.str());

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    displayHistory(history);

    std::cout << "***********************************\n";

    return 0;
}
