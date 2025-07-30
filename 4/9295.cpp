#include <iostream>

using namespace std;

int main(void)
{
    int t, x1, x2, i;
    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> x1 >> x2;
        if (x1 < 1 || x1 > 6)
            exit(1);
        if (x2 < 1 || x2 > 6)
            exit(1);
        cout << "Case " << i + 1 << ": " << x1 + x2 << "\n";
    }
    return 0;
}