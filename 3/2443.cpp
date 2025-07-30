#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = n-1; i >= 0; i--) {
        for (j = n-1; j > i; j--)
            cout << " ";
        for (j = 2*i + 1; j > 0; j--)
            cout << "*";
        cout << "\n";
    }

    return 0;
}