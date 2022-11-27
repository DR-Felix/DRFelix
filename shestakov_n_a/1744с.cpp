#include <iostream>
#include <vector>

int main() {
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		int n = 0;
		char c = ' ';
		std::string s = "";
		std::vector<int> ln;
		std::cin >> n;
		std::cin >> c;
		std::cin >> s;
		s = s + s;
		int i_k = 0;
		int fl = 0;
		int max_l = -1;
		for (int j = 0; j < s.length(); j += 1) {
			if ((s[j] == c) && fl == 0) {
				i_k = j;
				fl = 1;
			}
			if (s[j] == 'g' && fl == 1) {
				ln.push_back(j - i_k);
				fl = 0;
			}
		}
		for (int j = 0; j < ln.size(); j += 1) {
			if (ln[j] > max_l) {
				max_l = ln[j];
			}
		}

		std::cout << max_l << std::endl;
	}
	return 0;
}