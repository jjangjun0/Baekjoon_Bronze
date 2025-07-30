#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}