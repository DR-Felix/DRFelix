#include<iostream>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        for (int j = 1; j <= n; j += 1) {
            for (int k = 1; k <= m; k += 1) {
                std::cout << ((j % 4 <= 1) != (j % 4 <= 1)) << ' ';
            }
            std::cout << std::endl;
        }
    }
    return 0;
}