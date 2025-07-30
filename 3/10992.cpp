#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = 0; i < n; i++) {
        for (j = n-1; j > i; j--)
            cout << " ";
        cout << "*";
        if (i == 0) {
            cout << "\n";
            continue;
        }
        if (i == n-1) {
            for (j = 0; j <= 2*i-1; j++)
                cout << "*";
            cout << "\n";
            break;
        }
        
        for (j = 0; j < 2*i-1; j++)
            cout << " ";
        cout << "*";
        cout << "\n";
    }

    return 0;
}