#include <iostream>
#include <set>

int main() {
    std::set <int> det;
    int a = 0;
    int m = 0;
    std::cin >> a >> m;
    bool fl = false;
    while (!det.contains(a % m)) {
        det.insert(a % m);
        a = (a % m) * 2;
        if (a == 0) {
            fl = true;
            break;
        }
    }
    if (fl) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
}