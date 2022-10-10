#include <iostream>
 
int main()
{
	int t;
	int n, k, r, c;
	std::cin >> t;
	for (int a = 0; a < t; a += 1) {
		std::cin >> n >> k >> r >> c;
		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= n; j += 1) {
				if ((i + j) % k == (r + c) % k) {
					std::cout << "X";
				}
				else {
					std::cout << ".";
				}
			}
			std::cout << "\n";
		}
	}
	return 0;
}
