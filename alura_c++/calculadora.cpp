#include <iostream>

class Calculator {
    private:
        double num1;
        double num2;
    public:
        void setNum1(double num) {
            num1 = num;
        }

        void setNum2(double num) {
            num2 = num;
        }

        double getNum1() {
            return num1;
        }

        double getNum2() {
            return num2;
        }

        double add() {
            return num1 + num2;
        }

        double subtract() {
            return num1 - num2;
        }

        double multiply() {
            return num1 * num2;
        }

        double divide() {
            if(num2 == 0) {
                throw "Error: Division by zero is not allowed.";
            }
            return num1 / num2;
        }
};

int main() {
    Calculator calc;

    double num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    calc.setNum1(num1);
    calc.setNum2(num2);

    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    std::cout << "Multiplication: " << calc.multiply() << std::endl;
    try {
        std::cout << "Division: " << calc.divide() << std::endl;
    } catch (const char* msg) {
        std::cout << msg << std::endl;
    }

    return 0;
}