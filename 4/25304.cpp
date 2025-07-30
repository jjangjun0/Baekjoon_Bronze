#include <iostream>

using namespace std;

int main(void)
{
    long int x, a, result = 0;
    int n, b, i;
    cin >> x;
    if (x < 1 || x > 1000000000)
        exit(1);
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);
    
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        if (a < 1 || a > 1000000)
            exit(1);
        if (b < 1 || b > 10)
            exit(1);

        result += a * b;
    }
    if (x == result)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}