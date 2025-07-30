#include <iostream>

using namespace std;

int main(void)
{
    int n, m, i, j;
    cin >> n >> m;
    if (n < 0 || n > 10)
        exit(1);
    if (m < 0 || m > 10)
        exit(1);

    char bbang[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> bbang[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = m-1; j >= 0; j--) {
            cout << bbang[i][j];
        }
        cout << "\n";
    }
    return 0;
}