#include <iostream>
#include <cmath>

int main() {
    std::string s = " ";
    char n = ' ';
    std::cin >> s;
    std::cin >> n;
    int fl = 0;
    for (int i = 1; i <= s.size(); i += 1) {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
            if (s[i - 1] != n && s[i - 1] != 'a' && s[i - 1] != 'o' && s[i - 1] != 'u' && s[i - 1] != 'i' && s[i - 1] != 'e') {
                fl = 0;
                std::cout << "NO";
                break;
            }
        }
        else {
            fl = 1;
        }
    }
    if (fl == 1) {
        std::cout << "YES";
    }
}