#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; k += 1) {
		int n;
		std::cin >> n;
		int ai = 0;
		int bi = 0;
		int time = 0;
		std::vector <int> a(101);
		std::vector <int> b(101);
		std::vector <int> t(101);
		for (int i = 1; i <= n; i += 1) {
			std::cin >> a[i] >> b[i];
		}
		for (int i = 1; i <= n; i += 1) {
			std::cin >> t[i];
		}
		for (int i = 0; i < n; i += 1) {
			if (b[i] > time + (b[i] - a[i] + 1) / 2) {
				time = b[i];
			}
			else {
				time = time + (b[i] - a[i] + 1) / 2;
			}
			time += a[i + 1] - b[i] + t[i + 1];
		}
		std::cout << time << std::endl;
	}

}