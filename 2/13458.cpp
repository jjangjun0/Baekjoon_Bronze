#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    long int N, x1, x2, i, people = 0;
    cin >> N;
    if (N < 1 || N > 1000000)
        exit(1);
    long int A[N];
    for (i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] < 1 || A[i] > 1000000)
            exit(1);
    }
    cin >> x1 >> x2;
    if (x1 < 1 || x1 > 1000000)
        exit(1);
    if (x2 < 1 || x2 > 1000000)
        exit(1);

    for (i = 0; i < N; i++) {
        A[i] -= x1;
        people += 1; // 총 감독관 수

        if (A[i] <= 0)
            continue;

        people += ceil(A[i] / x2);

        if (A[i] % x2 != 0)
            people++; // 나누어 떨어지지 않더라도 부족한 학생을 관리할 부 감독관 1명이 더 필요하다.
    }
    cout << people;

    return 0;
}