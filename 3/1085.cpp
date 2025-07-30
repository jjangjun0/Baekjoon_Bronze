#include <iostream>

using namespace std;

int main(void)
{
    int x, y, w, h;
    double middle_w, middle_h;
    cin >> x >> y >> w >> h;
    if (w < 1 || x > 1000)
        exit(1);
    if (h < 1 || h > 1000)
        exit(1);
    if (x < 1 || x > w-1)
        exit(1);
    if (y < 1 || y > h-1)
        exit(1);

    middle_w = w / 2.0;
    middle_h = h / 2.0;

    if (x >= middle_w) {
        if (y >= middle_h)
            (w - x) > (h - y) ? cout << h - y : cout << w - x;
        else
            (w - x) > y ? cout << y : cout << w - x;
    }
    else {
        if (y >= middle_h)
            x > (h - y) ? cout << h - y : cout << x;
        else
            x > y ? cout << y : cout << x;
    }

    return 0;
}