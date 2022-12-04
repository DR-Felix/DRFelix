#include<iostream>
#include <algorithm> // для функции sort()
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
    }
    std::sort(arr.begin(), arr.end());
    int day = 1;
    int count = 0;
    for (int i = 0; i < n; i += 1) {
        if (arr[i] >= day) {
            count += 1;
            day += 1;
        }
    }
    std::cout << count;
    return 0;
}