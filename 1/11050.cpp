#include <iostream>

using namespace std;

int factorial(int n) {
    int i = 0, result = 1;
    for (i = n; i > 0; i--)
        result *= i;
    return result;
}

int main(void)
{
    int N, K, result;

    cin >> N >> K;
    if (N < 1 || N > 10)
        exit(1);
    if (K < 0 || K > N)
        exit(1);
    
    result = ( factorial(N) / factorial(N-K) ) / factorial(K);
    cout << result;

    return 0;
}