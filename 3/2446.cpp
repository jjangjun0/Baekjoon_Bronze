#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = 0; i < 2*n-1; i++) {
        if (i < n) {
            for (j = 0; j < i; j++)
                cout << " ";
            for (j = 2*n-1; j >= 2*i+1; j--)
                cout << "*";
        }
        else {
            for (j = n-1-1; j > i-n; j--)
                cout << " ";
            for (j = 0; j < 2*(i-n+1)+1; j++)
                cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

    // for (i = n-1; i > 0; i--) {
    //     for (j = n-1; j > i; j--)
    //         cout << " ";
    //     for (j = 2*i + 1; j > 0; j--)
    //         cout << "*";
    //     cout << "\n";
    // }
    // for (i = 0; i < n; i++) {
    //     for (j = n-1; j > i; j--)
    //         cout << " ";
    //     for (j = 0; j < 2*i + 1; j++)
    //         cout << "*";
    //     cout << "\n";
    // }