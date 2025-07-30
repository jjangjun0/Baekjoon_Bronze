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
            // 증가하는 형태
            for (j = 0; j < n-1; j++) {
                if (j < n-1 - i)
                    cout << " ";
                else
                    cout << "*";
            }
            cout << "*";
            for (j = 0; j < n-1; j++) {
                if (j < i)
                    cout << "*";
                //else
                //    cout << " ";
            }
        }
        else {
            // 줄어드는 형태
            for (j = 0; j < n-1; j++) {
                if (j <= i-n)
                    cout << " ";
                else
                    cout << "*";
            }
            cout << "*";
            for (j = n-2; j > 0; j--) {
                if (j > i - n)
                    cout << "*";
                //else
                //    cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}