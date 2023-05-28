#include <iostream>

class Calculator {
public:
    // Function Overloading with different parameter types
    int add(int a, int b) {
        std::cout << "Adding integers: ";
        return a + b;
    }

    double add(double a, double b) {
        std::cout << "Adding doubles: ";
        return a + b;
    }

    // Function Overloading with different number of parameters
    int multiply(int a, int b) {
        std::cout << "Multiplying integers: ";
        return a * b;
    }

    int multiply(int a, int b, int c) {
        std::cout << "Multiplying integers with three parameters: ";
        return a * b * c;
    }

    // Function Overloading with default argument
    int divide(int a, int b) {
        std::cout << "Dividing integers: ";
        return a / b;
    }

    int divide(int a) {
        std::cout << "Dividing integer by 2: ";
        return a / 2;
    }
};

int main() {
    Calculator calc;

    std::cout << calc.add(5, 10) << std::endl; // Adding integers: 15
    std::cout << calc.add(3.5, 2.5) << std::endl; // Adding doubles: 6

    std::cout << calc.multiply(4, 6) << std::endl; // Multiplying integers: 24
    std::cout << calc.multiply(2, 3, 4) << std::endl; // Multiplying integers with three parameters: 24

    std::cout << calc.divide(10, 2) << std::endl; // Dividing integers: 5
    std::cout << calc.divide(8) << std::endl; // Dividing integer by 2: 4
    
    return 0;
    
}


