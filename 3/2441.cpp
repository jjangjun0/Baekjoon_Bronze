#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}