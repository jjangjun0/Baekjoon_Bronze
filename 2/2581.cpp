#include <iostream>

using namespace std;

int main(void)
{
    int M, N, min, sum = 0, is_prime, is_min, i, j;

    cin >> M;
    cin >> N;
    if (M < 1 || M > 10000)
        exit(1);
    if (N < M || N > 10000)
        exit(1);

    is_min = 1;
    for (i = M; i <= N; i++) {
        is_prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0)     // 1과 자기 자신을 제외하고, 
                is_prime = 0;   // i가 j의 배수면 소수가 아니다.
        }
        if (i == 1)
            is_prime = 0; // 1은 소수가 아니다.

        if (is_prime && is_min) {
            min = i;
            is_min = 0;
        }
        if (is_prime) {
            // cout << "소수 찾음! : " << i << "\n";
            sum += i;
        }
    }

    if (is_min)
        cout << -1;
    else {
        cout << sum << "\n";
        cout << min;
    }

    return 0;
}