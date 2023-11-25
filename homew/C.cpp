#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double sequence[n];
    
    // Input the sequence
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }


    double max_absolute_value = 0;
    for (int i = 0; i < n; ++i) {
        double abs_value = std::abs(sequence[i]);
        if (abs_value > max_absolute_value) {
            max_absolute_value = abs_value;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << max_absolute_value << std::endl;

    return 0;
}