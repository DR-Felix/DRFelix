#include <iostream>
#include <cmath>

int main() {
    float a = 0.1;
    float b = 1;
    double dt = 0.05;
    double eps = 0.0001;
    std::cout << ' ' << 'x' << "         " << 's' << std::endl;
    for (float x = a; x <= b; x += dt) {
        int i = 0;
        float temp = 1;
        float s = 0;
        while (std::abs(temp) >= eps) {
            temp = std::pow(-1, i + 1)*std::pow(x, 2*i + 1)/(4*i*i-1);
            s += temp;
            i += 1;
        }
        std::cout << x << "    " << s << std::endl;
    }
}