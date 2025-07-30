#include <iostream>

#define N 10

using namespace std;

int main(void)
{
    int t, a, i, result;
    long int b, j;
    cin >> t;
    if (t < 1)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> a >> b;
        if (a < 1 || a >= 100)
            exit(1);
        if (b < 1 || b >= 1000000)
            exit(1);

        result = 1; // 초기화
        a %= N;             // 1의 자리가 궁금하다.
        for (j = 0; j < b; j++) {
            result *= a;
            result %= N;    // a % N ==> 와 마찬가지로 모두 % 10 하고 곱한 것과 같다.
        }

        if (a == 0)
            cout << "10" << "\n";
        else
            cout << result << "\n";
    }

    return 0;
}