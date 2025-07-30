#include <iostream>

#define TEN 10
using namespace std;

int main(void)
{
    int N, converted_N, added_N, temp, cycle = 0;
    cin >> N;
    if (N < 0 || N > 99)
        exit(1);

    added_N = N; // 처음은 N이다.
    while (1) {
        converted_N = 0;
        if (added_N < TEN) {
            converted_N = 0 + added_N; // 앞에 0을 붙여 두 자리 수로 만든다.
        }
        else {
            temp = added_N;
            converted_N += temp % TEN; // 1의 자리
            temp /= TEN;
            converted_N += temp % TEN; // 10의 자리
        }
        added_N = (added_N % TEN) * 10 + (converted_N % TEN);
        // cout << "converted_N: " << converted_N << ", added_N: " << added_N << "\n";

        cycle++;
        if (added_N == N)
            break;
    }
    cout << cycle;

    return 0;
}