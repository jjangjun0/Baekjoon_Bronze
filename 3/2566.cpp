#include <iostream>

using namespace std;
#define N 9

int main(void)
{
    int num[N][N];
    int i, j, max, is_stop;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num[i][j];
            if (num[i][j] < 0 || num[i][j] > 100)
                exit(1);
        }
    }

    max = num[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (num[i][j] > max)
                max = num[i][j];
        }
    }
    is_stop = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (num[i][j] == max) {
                cout << max << "\n";
                cout << i+1 << " " << j+1;
                is_stop = 1;
                break;
            }
        }
        if (is_stop)
            break;
    }

    return 0;
}