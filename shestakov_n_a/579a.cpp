#include <iostream>

int main() {
    int x = 0;
    std::cin >> x;
    int k = 0;
    while (x > 0) {
        if (x % 2 == 1) {
            k += 1;
        }
        x = x / 2;
    }
    std::cout << k;
    return 0;
}