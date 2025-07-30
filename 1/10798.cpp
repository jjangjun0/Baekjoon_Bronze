#include <iostream>
#include <cstring>

#define N 5
#define SIZE 15
using namespace std;

int main(void)
{
    char str[N][SIZE+1];
    int length[N];
    int i, j, max_length;

    for (i = 0; i < N; i++) {
        cin >> str[i];
        length[i] = strlen(str[i]);
    }
    max_length = length[0];
    for (i = 0; i < N; i++) {
        if (max_length < length[i])
            max_length = length[i];
    }

    for (i = 0; i < max_length; i++) {
        for (j = 0; j < N; j++) {
            if (i > length[j]-1)
                continue;
            else
                cout << str[j][i];
        }
    }

    return 0;
}