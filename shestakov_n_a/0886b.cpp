#include <iostream>
#include <array>
#include <cmath>


int main() {
    int n = 0;
    int a = 0;
    int cur = 0;
    int k = 0;
    int a0 = 1000000000;
    const long int nMax = 2 * 100000 + 1;
    std::cin >> n;
    int mn = 1000000;
    std::array<long int, nMax> stol{0};
    for (int i = 0; i < n; i += 1) {
        std::cin >> a;
        stol[a] = i + 1;
        if (a > k) {
            k = a;
        }
    }
    // int z = 0;
    for (int j = 0; j <= k; j += 1) {
        if (stol[j] < mn && stol[j] != 0) {
            mn = stol[j];
            cur = j;
        }
        // z = j;
    }
    /*if (stol[z + 1] < mn) {
        std::cout << z + 1;
    }
    else {
        std::cout << cur;
    }*/
    std::cout << cur;
    return 0;
}