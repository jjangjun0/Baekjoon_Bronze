#include <iostream>

using namespace std;

long int T(int n) {
    long int result = 0;
    for (int i = n; i > 0; i--)
        result += i;
    return result;
}

int main(void)
{
    long int sum;
    int t, n, i, j;

    cin >> t;
    if (t < 1)
        exit(1);
    
    for (i = 0; i < t; i++) {
        cin >> n;
        if (n < 1 || n > 300)
            exit(1);

        sum = 0;
        for (j = 1; j <= n; j++) {
            sum += j * T(j+1);
        }
        cout << sum << "\n";
    }

    return 0;
}