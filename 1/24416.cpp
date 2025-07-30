#include <iostream>

using namespace std;

long int code1 = 0;
long int code2 = 0;

long int fib(int n) {
    if (n == 1 || n == 2) {
        code1++;
        return 1;
    }
    else
        return (fib(n-1) + fib(n-2));
}
long int fibonacci(int n) {
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];     // 메모이제이션
        code2++;
    }
    return f[n];
}

int main(void)
{
    int n;
    cin >> n;
    if (n < 5 || n > 40)
        exit(1);

    if (fib(n) != fibonacci(n))
        exit(1);

    cout << code1 << " " << code2;

    return 0;
}