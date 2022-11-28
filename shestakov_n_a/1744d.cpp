#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        std::cin >> n;
        int k = 0;
        for (int j = 0; j < n; j += 1) {
            int a = 0;
            std::cin >> a;
            while (a % 2 == 0) {
                k += 1;
                a /= 2;
            }
        }
        if (k >= n) {
            std::cout << 0 << std::endl;
        }
        else {
            int ans = 0;
            int lg = int(std::log2(n));
            while (k != n && lg > 0) {
                if (k + lg <= n) {
                    k += lg;
                    ans += 1;
                }
                lg = lg - 1;
            }
            if (k != n) {
                std::cout << -1 << std::endl;
            }
            else {
                std::cout << ans << std::endl;
            }
        }
    }
}