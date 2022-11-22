#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    int t4 = 0;
    for (int i = 0; i < t; i += 1) {
        std::cin >> t1 >> t2;
        std::cin >> t3 >> t4;
        if (t1 + t2 + t3 + t4 == 0) {
            std::cout << 0 << std::endl;
        }
        else if (t1 + t2 + t3 + t4 == 1 || t1 + t2 + t3 + t4 == 2 || t1 + t2 + t3 + t4 == 3) {
            std::cout << 1 << std::endl;
        }
        else if (t1 + t2 + t3 + t4 == 4) {
            std::cout << 2 << std::endl;
        }

    }
}