#include <iostream>

using namespace std;

int main(void)
{
    int t, d, i, j, late;
    cin >> t;
    if (t < 1 || t > 100)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> d;
        if (d < 1 || d > 10000)
            exit(1);

        for (j = 0; j < d; j++) {
            if (d >= j + j*j)
                late = j;
        }
        cout << late << "\n";
    }

    return 0;
}