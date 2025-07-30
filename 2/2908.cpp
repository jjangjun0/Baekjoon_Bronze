#include <iostream>

using namespace std;

int main(void)
{
    int x1, x2, X1, X2;
    cin >> x1 >> x2;
    if (x1 < 100 || x1 > 999)
        exit(1);
    if (x2 < 100 || x2 > 999)
        exit(1);
    
    X1 = X2 = 0;
    X1 += (x1 % 10) * 100;
    x1 /= 10;
    X1 += (x1 % 10) * 10;
    x1 /= 10;
    X1 += (x1 % 10) * 1;

    X2 += (x2 % 10) * 100;
    x2 /= 10;
    X2 += (x2 % 10) * 10;
    x2 /= 10;
    X2 += (x2 % 10) * 1;

    X1 >= X2 ? cout << X1 : cout << X2;

    return 0;
}