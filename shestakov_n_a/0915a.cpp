#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main() {
    int n, k, a, t;
    t = 10000000000;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        std::cin >> a;
        if (k % a == 0) {
            if (k / a < t) {
                t = k / a;
            }
        }
    }
    std::cout << t;
}