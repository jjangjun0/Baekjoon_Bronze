#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f, i, j;
    long int x, y;
    cin >> a >> b >> c >> d >> e >> f;
    if (a < -999 || a > 999) exit(1);
    if (b < -999 || b > 999) exit(1);
    if (c < -999 || c > 999) exit(1);
    if (d < -999 || d > 999) exit(1);
    if (e < -999 || e > 999) exit(1);
    if (f < -999 || f > 999) exit(1);

    // (DivisionByZero) 발생
    if (a == 0) {
        y = c / b;
        x = (f - e * y) / d;
    }
    else if (b == 0) {
        x = c / a;
        y = (f - d * x) / e;
    }
    else if (d == 0) {
        y = f / e;
        x = (c - b * y) / a;
    }
    else if (e == 0) {
        x = f / d;
        y = (c - a * x) / b;
    }
    else {
        y = ((long)c*d - f*a) / ((long)b*d - e*a);
        x = (c - (long)b*y) / a;
    }
    cout << x << " " << y;

    return 0;
}