#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

int main() {
	long int a, c, s = 0, A_r, C_r;
	std::cin >> a >> c;
	std::vector <int> A;
	std::vector <int> C;
	std::vector <int> B;
	while (a > 0) {
		A.push_back(a % 3);
		a = a / 3;
	}
	while (c > 0) {
		C.push_back(c % 3);
		c = c / 3;
	}
	if (std::size(A) < std::size(C)) {
		A_r = std::size(A);
		for (int i = 0; i < std::size(C) - A_r; i += 1) {
			A.push_back(0);
		}
	}
	else if (std::size(A) > std::size(C)) {
		C_r = std::size(C);
		for (int i = 0; i < std::size(A) - C_r; i += 1) {
			C.push_back(0);
		}
	}
	for (int i = 0; i < std::size(A); i += 1) {
		B.push_back((3+C[i]-A[i])%3);
	}
	for (int i = 0; i < std::size(B); i += 1) {
		s = s + B[i] * pow(3, i);
	}
	std::cout << s;
	return 0;
}