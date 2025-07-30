#include <iostream>

using namespace std;

int main(void)
{
    int x1, x2, x3;
    cin >> x3;
    cin >> x2;
    if (x3 < 0 || x3 > 50)
        exit(1);
    if (x2 < x3 || x2 > 50)
        exit(1);
    cout << 2 * x2 - x3;

    return 0;
}