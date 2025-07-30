#include <iostream>

using namespace std;

int main(void)
{
    int n, temp, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp < 1 || temp > 80)
            exit(1);
        
        for (j = 0; j < temp; j++)
            cout << "=";
        cout << "\n";
    }
    return 0;
}