#include <iostream>
#include <cmath>

int main() {
    double n = 0;
    double k = 0;
    double x = 0;
    double y = 0;
    while (std::cin >> x >> y) {
        if ((x * x + y * y <= 4) && (y >= 2 - x * x)) {
            k += 1;
        }
        n += 1;
    }
    std::cout << k / n;
}
