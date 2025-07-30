#include <iostream>

using namespace std;

int main(void)
{
    int n, i, x, y;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    // 2 x 1 => 2 x 2 => 3 x 2 => 3 x 3 => 4 x 3 => 4 x 4 => 5 x 4 => ...

    x = y = 1;
    for (i = 0; i < n; i++) {
        if (x == y)
            x++;
        else if (x > y)
            y++;
        //cout << "(" << x << ", " << y << ")\n";
    }
    cout << x * y;

    return 0;
}