#include <iostream>

#define MAX 14

using namespace std;

int main(void)
{
    int T, K, N, i, j, k, sum;
    long int apart[MAX+1][MAX];  // 0층 ~ 14층, 1호 ~ 14호

    for (j = 0; j < MAX; j++)
        apart[0][j] = j+1;  // 0층

    for (i = 1; i < MAX+1; i++) {   // 1층부터는 계산
        for (j = 0; j < MAX; j++) {
            sum = 0;
            for (k = 0; k <= j; k++)     // [i-1][0] => i-1층 1호이기에 j를 포함해야 한다.
                sum += apart[i-1][k];
            apart[i][j] = sum;
        }
    }

    // for (i = 0; i < MAX+1; i++) {
    //     for (j = 0; j < MAX; j++)
    //         cout << apart[i][j] << " ";
    //     cout << "\n";
    // }
    
    cin >> T;
    if (T < 1)
        exit(1);

    for (i = 0; i < T; i++) {
        cin >> K;
        cin >> N;
        if (k < 1 || k > MAX)
            exit(1);
        if (N < 1 || N > MAX)
            exit(1);

        cout << apart[K][N-1] << "\n";
    }

    return 0;
}