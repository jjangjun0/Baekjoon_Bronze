#include <iostream>

using namespace std;

long long int fibonacci(int n) {
    long long int f[n+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;

    for (i = 3; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n]; // n번째 피보나치 수 (1부터 1번째)
}

int main(void)
{
    int n;
    long long int result;
    cin >> n;
    if (n < 1 || n > 90)
        exit(1);

    result = fibonacci(n);
    cout << result;

    return 0;
}