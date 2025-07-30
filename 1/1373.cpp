#include <iostream>
#include <cstring>

#define N 3
#define M 8
#define SIZE 1000000
using namespace std;

int main(void)
{
    static char change_str[M][N+1] = {
        "000", "001", "010", "011",
        "100", "101", "110", "111"
    };
    char str[SIZE+1];
    char new_str[SIZE+N];
    long int length, i;
    int j;

    cin >> str;
    length = strlen(str);
    new_str[0] = '\0';
    if (length % N == 1) {
        strcat(new_str, "00");
        strcat(new_str, str);
        length += 2;
    }
    else if (length % N == 2) {
        strcat(new_str, "0");
        strcat(new_str, str);
        length += 1;
    }
    else
        strcat(new_str, str);
    // cout << new_str << "\n";

    for (i = 0; i < length; i += N) {
        for (j = 0; j < M; j++) {
            if (strncmp(new_str+i, change_str[j], N) == 0) {

                cout << j;
                break;
            }
        }
    }

    return 0;
}