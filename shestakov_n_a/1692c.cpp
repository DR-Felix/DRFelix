#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    std::string s = "";
    for (int k = 0; k < t; k += 1) {
        int res = 0;
        int x = 0;
        int y = 0;
        int fl = 0;
        for (int i = 1; i <= 8; i += 1) {
            std::cin >> s;
            int num = 0;
            if (fl == 0) {
                for (int j = 0; j < 8; j += 1) {
                    if (s[j] == '#' && num == 0) {
                        num = j + 1;
                    }
                    else if (s[j] == '#' && num != 0) {
                        res = j - num;
                        x = res / 2 + 1 + i;
                        y = res / 2 + 1 + num;
                        fl = 1;
                    }
                }
            }
        }
        std::cout << x << ' ' << y << std::endl;
    }
}
