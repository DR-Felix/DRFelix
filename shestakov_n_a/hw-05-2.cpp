#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double a, b, sig, eps;
	std::cin >> a >> b >> sig >> eps;
	double s = 0.0; // сумма
	double y = 0; // значение функции
	double s_i = 1.0; // текущий элемент, который суммируют
	int i = 1; // счетчик
	std::cout.flags(std::ios::left); // стягивание текста влево
	std::cout << std::setprecision(10); //точность вывода - 10 символов после запятой
	std::cout << std::setw(10); // для текста отводится 10 символов
	std::cout << "x" << "|" << std::setw(10) << "s(x)" << "|" << std::setw(10) << "f(x)" << std::endl;
	for (a; a <= b; a += sig) {
		s = 0.0;
		s_i = 1.0;
		i = 1;
		while (abs(s_i) > eps) {
			s_i = pow(a, i) * sin(i * (M_PI / 4));
			s = s + s_i;
			y = (a * sin(M_PI / 4)) / (1 - 2 * a * cos(M_PI / 4));
			i += 1;
		}
		std::cout << std::setw(10) << a << '|' << std::setw(10) << s << '|' << std::setw(10) << y << '|' << std::endl;
	}
    return 0;
}