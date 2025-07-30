#include <iostream>

using namespace std;
#define N 5
#define M 4

int main(void)
{
    int score[N][M];
    int sum[N] = {0};
    int max_idx, i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> score[i][j];
            if (score[i][j] < 1 || score[i][j] > 5)
                exit(1);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            sum[i] += score[i][j];
    }

    max_idx = 0;
    for (i = 0; i < N; i++) {
        if (sum[max_idx] < sum[i])
            max_idx = i;
    }
    cout << max_idx + 1 << " " << sum[max_idx];

    return 0;
}