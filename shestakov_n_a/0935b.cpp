#include <iostream>
#include <string>


int main() {
    int n = 0;
    int x = 0;
    int y = 0;
    int k = 0;
    std::string s = "";
    std::cin >> n;
    std::cin >> s;
    if (s[0] == 'U') {
        y += 1;
    }
    else {
        x += 1;
    }
    for (int i = 1; i <= n; i += 1) {
        if (s[i] == 'U') {
            if (x == y) {
                y += 1;
                if (s[i - 1] == s[i] && y != 0) {
                    k += 1;
                }
            }
            else {
                y += 1;
            }
        }
        else if (s[i] == 'R') {
            if (x == y) {
                x += 1;
                if (s[i - 1] == s[i] ) {
                    k += 1;
                }
            }
            else {
                x += 1;
            }
        }
    }
    std::cout << k;
    return 0;
}