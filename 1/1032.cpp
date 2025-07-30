#include <iostream>
#include <cstring>

#define SIZE 50
using namespace std;

int main(void)
{
    int T, i, j, length, is_same;
    char ch;
    char compare[SIZE+1];
    cin >> T;
    if (T < 1 || T > 50)
        exit(1);

    char str[T][SIZE+1];
    for (i = 0; i < T; i++) {
        cin >> str[i];
    }
    length = strlen(str[0]);

    for (j = 0; j < length; j++) {
        is_same = 1;
        ch = str[0][j];
        for (i = 0; i < T; i++) {
            if (str[i][j] != ch) {
                is_same = 0;
                break;
            }
        }

        if (is_same)
            compare[j] = 'O';
        else
            compare[j] = 'X';
    }

    for (j = 0; j < length; j++) {
        if (compare[j] == 'O')
            cout << str[0][j];
        else if (compare[j] == 'X')
            cout << "?";
    }

    return 0;
}