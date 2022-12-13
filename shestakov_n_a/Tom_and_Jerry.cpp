#include <iostream>
#include <cmath>
#include "Lib2.hpp"

int main() {
	Rdec2D r_m = { 0, -13};
	Rdec2D r_c = { 13, -5 };
	double k_c = 4;
	double const_y_m = r_m.y;
	Rdec2D v_m = { 0, 3 };
	Rdec2D v_c = { 0, 0 };
	double norm_v_c = norm(v_c);
	double dt = 1;
	double const_between = norm(r_m - r_c);
	for (int i = 1; i != 0;  i += 1) {
		if (norm(r_c) >= norm(r_m + v_m)) {
			std::cout << "go far-far/on places";
			break;
		}
		r_m += v_m;
		if (r_m.y >= 0) {
			std::cout << "go under";
			break;
		}
		Rdec2D delta_v_c = (r_m - r_c) / norm(r_m - r_c) * norm_v_c;
		r_c += delta_v_c;
		if (norm(r_m - r_c) <= k_c) {
			std::cout << "was eaten";
			break;
		}
	}
}
