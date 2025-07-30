#include <iostream>

using namespace std;

int main(void)
{
    long int N, N_half, i, j, is_prime, is_invest = 0;
    cin >> N;
    if (N < 1 || N > 10000000)
        exit(1);
    if (N == 1)
        exit(0);

    N_half = N / 2;     // 반 값보다 작은 값들이 소수가 될 수 있다. => 최적화
    int num[N_half] = { 0 };
    
    for (i = 2; i <= N_half; i++) {
        is_prime = 1;
        for (j = 0; j < i; j++) {
            if (num[j] != 0 && i % (j+1) == 0) {
                // cout << "num[j]: " << num[j] << ", " << i << " % " << j+1 << " == 0\n";
                is_prime = 0;   // num[j] != 0    -> i가 작은 소수들의 곱으로 이루어져있으면 소수가 아니다. {ex) 8 % 4 == 0 방지}
                break;          // num[j] != 0이라면 j+1값으로 소인수분해를 했을 것이다. i % (j+1) == 0 -> i가 소수인지 판단
            }
        }

        if (is_prime) {
            while (1) {
                if (N % i == 0) {
                    num[i-1]++;
                    N /= i;
                    // cout << "prime number: " << i << ", N: " << N << "\n";
                    if (!is_invest)
                        is_invest = 1; // 한 번이라도 소인수분해 하였는가?
                }
                else
                    break;
            }
        }
    }
    // 자신의 반 값보다 작은 소수들의 곱으로 이루어지지 않았다면 이놈이 소수다.
    if (!is_invest)
        cout << N;
    else {
        for (i = 0; i < N_half; i++) {
            if (num[i] != 0) {
                for (j = 0; j < num[i]; j++)
                    cout << i+1 << "\n";    // 소인수 분해된 소수들 오름차순으로 출력
            }
        }
    }

    return 0;
}