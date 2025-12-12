#include <iostream>

int main() {
    int a;
    std::cout << "Enter a: ";
    std::cin >> a;

    if (a <= 0) {
        std::cout << "[]\n";
        return 0;
    }

    for (int i = 0; i < a; i++) {
        std::cout << (2 * i + 1);
        if (i < a - 1) std::cout << ", ";
    }
    std::cout << "\n";
}
