#include <iostream>

int main() {
    int a;
    std::cout << "Enter a: ";
    std::cin >> a;

    if (a <= 0) {
        std::cout << "[]\n";
        return 0;
    }

    int k = (a % 2 == 1) ? a : a - 1;  // odd count

    for (int i = 0; i < k; i++) {
        std::cout << (2 * i + 1);
        if (i < k - 1) std::cout << ", ";
    }
    std::cout << "\n";
}
