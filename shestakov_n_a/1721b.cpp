#include <iostream>
#include <array>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n, m, s_x, s_y, d;
        std::cin >> n >> m >> s_x >> s_y >> d;
        if (s_y + d >= m && s_y - d <= 1) {
            std::cout << -1 << '\n'; // если лазер полностью покрывает столбец
        }
        else if (s_x + d >= n && s_x - d <= 1) {
            std::cout << -1 << '\n'; // если лазер полностью покрывает строку
        }
        else if (s_y - d <= 1 && s_x - d <= 1) {
            std::cout << -1 << '\n'; // если лазер перекрывает стартовую позицию диагональю
        }
        else if (s_y + d >= m && s_x + d >= n) {
            std::cout << -1 << '\n'; // если лазер перекрывает конечную позицию диагональю
        }
        else {
            std::cout << n + m - 2 << '\n';
        }
    }
    return 0; 
}