#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double a, b, sig, eps;
	std::cin >> a >> b >> sig >> eps;
	double s = 0.0; // сумма
	double y; // значение функции
	double s_i = 1.0; // текущий элемент, который суммируют
	int i = 0; // счетчик
	int fact = 1; // переменная для счета в знаменателе
	std::cout.flags(std::ios::left); // стягивание текста влево
	std::cout << std::setprecision(10); //точность вывода - 10 символов после запятой
	std::cout << std::setw(10); // для текста отводится 10 символов
	std::cout << "x" << "|" << std::setw(10) << "s(x)" << "|" << std::setw(10) << "f(x)" << std::endl;
	for (a; a <= b; a += sig) {
		s = 0.0;
		s_i = 1.0;
		i = 0;
		while (abs(s_i) > eps) {
			if (i != 0) {
				fact = 1;
				for (int j = 1; j <= i * 2; ++j) {
					fact = fact * j;
				}
			}
			s_i = (pow(-1, i) * pow(a, 2 * i)) / fact;
			y = cos(a);
			s = s + s_i;
			i += 1;
		}
		if (a > -0.05 && a < 0.05) {
			std::cout << std::setw(10) << 0 << '|' << std::setw(10) << s << '|' << std::setw(10) << y <<'|'<< std::endl;
		}
		else {
			std::cout << std::setw(10) << a << '|' << std::setw(10) << s << '|' << std::setw(10) << y << '|' << std::endl;
		}
	}
    return 0;
}