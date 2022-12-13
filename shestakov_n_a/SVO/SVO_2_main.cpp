#include "Lib2.hpp"
#include <iostream>


int main() {
    Rdec2D r1 = { 0 , 10 };
    Rdec2D r2 = { 1000, 0 };
    Rdec2D v1 = { 100, 150 };
    Rdec2D v2 = { 0, 0 };
    Rdec2D delta_s = { 0, 0 };
    double t1 = 0;
    double t2 = 0;
    double delta_t = 0;
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double k = 0;
    double d_t = 1;
    const double c = 300.0, g = 10.0;
    delta_s = r2 - r1;
    delta_t = norm(delta_s) / c;
    double tmp = 0;
    x1 = r1.x;
    x2 = r2.x;
    y1 = r1.y;
    y2 = r2.y;
    while (tmp < 100) {
        t1 = delta_t + d_t * tmp;
        t2 = d_t * tmp;
        y1 = v1.y * t1 - g * t1 * t1 / 2;
        x1 = v1.x * t1 / t2;
        v2.x = (v1.x * t1) / t2;
        v2.y = (v1.y * t1 - g * t1 * t1 / 2 + g * t2 * t2 / 2) / t2;
        tmp += 1;
        if (y1 > 0) {
            std::cout << tmp << "   v1 = " << v1 << "   v2 = " << v2 << "   " << "  t1 =" << t1 << "  y = " << y1 << " x = " << x1 << std::endl;
        }
        else {
            std::cout << tmp << "   v1 = " << v1 << "  v2 = Error" << "  t1 =" << t1 << "   First charge fall to the ground " << std::endl;
        }
    }
}