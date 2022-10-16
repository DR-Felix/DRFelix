#include <iostream>
#include <cmath>
#include <string>

int main() {
	int t, n;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		std::cin >> n;
		if (n == 1) {
			std::cout << 1 << std::endl;
		}
		else if (n == 2) {
			std::cout << 1 << std::endl;
			std::cout << 1 << ' ' << 1 << std::endl;
		}
		else {
			for (int j = 1; j < n + 1; j += 1) {
				for (int k = 1; k < j + 1; k += 1) {
					if (j == k || k == 1) {
						std::cout << 1 << ' ';
					}
					else {
						std::cout << 0 << ' ';
					}
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
		}
	}
	return 0;
}