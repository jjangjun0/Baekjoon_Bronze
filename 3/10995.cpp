#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);
    
    for (i = 0; i < n; i++) {
        if ((i+1) % 2 == 0) // 짝수일 때 한 칸 띄운다.
            cout << " ";
        
        for (j = 0; j < n; j++) {
            cout << "*";

            if (j != n-1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}