#include <iostream>

using namespace std;

int main(void)
{
    long long sum = 0, result = 0;
    long int N, i, j;

    cin >> N;
    if (N < 1 || N > 2000000)
        exit(1);

    // A / N = i ... i, A = N*i + i = i * (N + 1)
    for (i = 1; i < N; i++) {
        sum += i;
    }

    // for (i = 1; i < N; i++)
    //     result += (long long)N * i + i;
    // cout << result;
    cout << sum * (N + 1);

    return 0;
}