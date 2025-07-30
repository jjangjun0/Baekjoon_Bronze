#include <iostream>
#include <cstring>

#define N 8

using namespace std;

int main(void)
{
    int i, j, mal = 0;
    char str[N+1];
    for (i = 0; i < N; i++) {
        cin >> str;
        for (j = 0; j < N; j++) {
            //if ( ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) && str[j] == 'F')
            //    mal++;

            if ((i+j) % 2 == 0 && str[j] == 'F')
                mal++;
        }
    }
    cout << mal;

    return 0;
}