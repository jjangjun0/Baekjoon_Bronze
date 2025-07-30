// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

#include <iostream>

using namespace std;

int main(void)
{
    int n, count = 1;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < count; j++) {
            cout << "*";
        }
        cout << "\n";
        count++;
    }
    return 0;
}