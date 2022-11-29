#include<iostream>
#include<queue>

int main() {
    int n = 0;
    int temp = 0;
    int max_a = 0;
    long long k = 0;;
    std::cin >> n >> k;
    std::queue <int> q;
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        if (a > max_a) {
            max_a = a;
        }
        q.push(a);
    }
    int a1 = q.front();
    if (a1 == max_a) {
        std::cout << a1;
    }
    else {
        while (temp != k) {
            q.pop();
            if (a1 > q.front()) {
                temp += 1;
                q.push(q.front());
            }
            else {
                temp = 1;
                q.push(a1);
                a1 = q.front();
                if (a1 == max_a) {
                    break;
                }
            }
        }
        std::cout << a1;
    }
    return 0;
}