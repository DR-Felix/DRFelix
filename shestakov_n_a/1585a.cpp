#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while (t != 0) {
        int n = 0, c = 1, l = -1, b = 0;
        std::cin >> n;
        for (int i = 0; i < n; i += 1) {
            int a = 0;
            std::cin >> a;
            if (a == 0) {
                if (l == 0) {
                    b = 1;
                }
            }
            else {
                if (l > 0) {
                    c += 5;
                }
                else {
                    c += 1;
                }
            }
            l = a;
        }
        if (b == 1) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << c << std::endl;
        }
        t -= 1;
    }

    return 0;
}
