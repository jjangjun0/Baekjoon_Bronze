#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int l, a, b, c, d, max_kor, max_math;
    cin >> l;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (l < 2 || l > 40)
        exit(1);
    if (a < 1 || a > 1000)
        exit(1);
    if (b < 1 || b > 1000)
        exit(1);
    if (c < 1 || c > 100)
        exit(1);
    if (d < 1 || d > 100)
        exit(1);

    max_kor = ceil((double)a / c);
    max_math = ceil((double)b / d);

    if (max_math >= max_kor)
        cout << l - max_math;
    else
        cout << l - max_kor;

    return 0;
}