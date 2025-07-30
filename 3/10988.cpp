#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 100

int main(void)
{
    char str[SIZE+1];
    int i, j, length, is_palindrom;

    cin >> str;
    length = strlen(str);

    is_palindrom = 1;
    if (length % 2 == 1) {
        // 길이가 짝수
        for (i = 0; i < length / 2; i++) {
            if (str[i] != str[length-1 - i]) {
                //cout << str[i] << " " << str[length-1 - i] << "\n";
                is_palindrom = 0;
                break;
            }
        }
    }
    else {
        // 길이가 홀수
        for (i = 0; i < length / 2; i++) {
            if (str[i] != str[length-1 - i]) {
                //cout << str[i] << " " << str[length-1 - i] << "\n";
                is_palindrom = 0;
                break;
            }
        }
    }

    if (is_palindrom)
        cout << 1;
    else
        cout << 0;

    return 0;
}