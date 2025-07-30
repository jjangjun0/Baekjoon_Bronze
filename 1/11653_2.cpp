#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, i;
    cin >> N;

    if (N == 1)
        exit(0);

    // 2부터 sqrt(N)까지 나눠보기 => N을 두 수의 곱으로 표현한다면 루트N * 루트N을 기점으로 하나는 더 커지고, 하나는 더 작아진다.
    for (i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            cout << i << '\n';
            N /= i;
        }
    }

    // 마지막에 남은 값이 소수라면 출력
    if (N > 1)
        cout << N << '\n';

    return 0;
}