#include <iostream>

using namespace std;

int main(void)
{
    int x1, x2, t3, t4, t5, temp;
    long result;

    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    cin >> x1;
    cin >> x2;
    if (x1 < 100 || x1 > 1000)
        exit(1);
    if (x2 < 100 || x2 > 1000)
        exit(1);

    temp = x2;
    t3 = temp % 10;
    temp /= 10;
    t4 = temp % 10;
    temp /= 10;
    t5 = temp % 10;

    cout << x1 * t3 << "\n";
    cout << x1 * t4 << "\n";
    cout << x1 * t5 << "\n";
    cout << (long)x1 * x2 << "\n";

    return 0;
}