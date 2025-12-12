#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

class Calculator {
public:
    Calculator(double a_, double b_) : a(a_), b(b_) {}
    double add() const { return a + b; }
    double sub() const { return a - b; }
    double mul() const { return a * b; }
    double div() const {
        if (b == 0.0) throw std::runtime_error("Division by zero is not allowed.");
        return a / b;
    }
private:
    double a, b;
};

int main() {
    std::cout << "Simple Calculator\n";
    double a, b;
    std::string op;
    std::cout << "Enter a (double): ";
    if (!(std::cin >> a)) return 0;
    std::cout << "Enter b (double): ";
    if (!(std::cin >> b)) return 0;
    std::cout << "Enter operation (add, sub, mul, div): ";
    std::cin >> op;
    for (auto &c : op) c = std::tolower(c);

    Calculator calc(a, b);
    try {
        if (op == "add") {
            std::cout << "Result: " << calc.add() << "\n";
        } else if (op == "sub") {
            std::cout << "Result: " << calc.sub() << "\n";
        } else if (op == "mul") {
            std::cout << "Result: " << calc.mul() << "\n";
        } else if (op == "div") {
            std::cout << "Result: " << calc.div() << "\n";
        } else {
            std::cout << "Unknown operation. Use add, sub, mul, or div.\n";
        }
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    return 0;
}
