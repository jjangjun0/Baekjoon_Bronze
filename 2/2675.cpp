#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 20

int main(void)
{
    int t, r, i, j, k;
    char str[SIZE+1];
    cin >> t;
    if (t < 1 || t > 1000)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> r;
        cin >> str;
        if (r < 1 || r > 8)
            exit(1);

        for (j = 0; j < strlen(str); j++) {
            for (k = 0; k < r; k++) {
                cout << str[j];
            }
        }
        cout << "\n";
    }

    return 0;
}