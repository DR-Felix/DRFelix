#include <iostream>

int main() {
    int t;
    int fl;
    std::string s;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> s;
        if (s == "a" || s == "b") {
            std::cout << "NO" << std::endl;
        }
        else if ((s[s.length() - 1] != s[s.length() - 2]) || (s[0] != s[1])) {
            std::cout << "NO" << std::endl;
        }
        else {
            fl = 1;
            for (int j = 1; j < s.length() - 1; j += 1) {
                if (s[j] != s[j + 1] && s[j] != s[j - 1]) {
                    fl = 0;
                }
            }
            if (fl == 0) {
                std::cout << "NO" << std::endl;
            }
            else {
                std::cout << "YES" << std::endl;
            }
        }
    }
    return 0;
}