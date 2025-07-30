#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = n; i > 0; i--) {
        for (j = 0; j < i; j++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}