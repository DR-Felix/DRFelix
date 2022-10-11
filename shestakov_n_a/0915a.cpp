#include <iostream>

int main() {
    int n, k, a, t;
    t = 1000000000;
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
    return 0;
}
