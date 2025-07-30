#include <iostream>

using namespace std;

int main(void)
{
    long int n, k, standard = 1, i;
    cin >> n;
    if (n < 1 || n > 1000000000)
        exit(1);

    for (i = 0; i <= n; i++) {
        standard += (6 * i); // 1 -> 7 -> 19 -> 37 ... 수열(더해지는 값이 +6, +12, +18, ...)
        // cout << standard << "\n";
        if (standard >= n) {
            k = i;
            break;
        }
    }
    // A0에서부터 Ak에 있는 k를 구했으니, 실제로 방은 k번 열고, 맨 처음에 방을 지나야 하니까 +1
    cout << k+1;
    return 0;
}