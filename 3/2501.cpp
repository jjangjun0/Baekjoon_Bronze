#include <iostream>

using namespace std;

int main(void)
{
    int n, k, submultiple, count = 0, i;
    cin >> n >> k;
    if (n < 1 || n > 10000)
        exit(1);
    if (k < 1 || k > 10000)
        exit(1);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;

        if (k == count) {
            cout << i;
            break;
        }
    }
    if (k > count)
        cout << 0;
    
    return 0;
}