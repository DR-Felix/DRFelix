#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> arr {0};
    arr.resize(n * 4);
    std::vector <int> ave {0};
    ave.resize(n);
    for (int i = 0; i < n * 4; i += 1) {
        std::cin >> arr[i];
    }
    int index1 = 0;
    int tmp = 0;
    int sm = 0;
    int index2 = 0;
    while (index1 < n * 4) {
        sm += arr[index1];
        if ((index1 + 1) % 4 == 0) {
            ave[index2] = sm;
            index2 += 1;
            sm = 0;
        }
        index1 += 1;
    }
    tmp = ave[0];
    int ans = 0;
    std::sort(ave.begin(), ave.end());
    for (int i = n - 1; i >= 0; i = i - 1) {
        if (ave[i] == tmp) {
            ans = n - i;
            break;
        }
    }
    std::cout << ans;
    return 0;
}