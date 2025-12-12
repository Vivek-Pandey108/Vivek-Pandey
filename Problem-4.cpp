#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::string line;
    std::cout << "Enter list of numbers (comma separated): ";
    std::getline(std::cin, line);

    line.erase(std::remove(line.begin(), line.end(), '['), line.end());
    line.erase(std::remove(line.begin(), line.end(), ']'), line.end());

    for (char &c : line)
        if (c == ',') c = ' ';

    std::stringstream ss(line);
    std::vector<int> nums;
    int x;

    while (ss >> x) nums.push_back(x);

    int counts[10] = {0};

    for (int d = 1; d <= 9; d++) {
        for (int n : nums)
            if (n % d == 0) counts[d]++;
    }

    std::cout << "{";
    for (int d = 1; d <= 9; d++) {
        std::cout << d << ": " << counts[d];
        if (d != 9) std::cout << ", ";
    }
    std::cout << "}\n";

    return 0;
}
