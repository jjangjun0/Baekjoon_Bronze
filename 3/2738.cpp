// N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.

// 첫째 줄에 행렬의 크기 N 과 M이 주어진다.
// 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다.
// 이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다.
// N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.

#include <iostream>

using namespace std;

int main(void)
{
    int n, m, i, j;
    cin >> n >> m;
    if (n < 1 || n > 100 || m < 1 || m > 100)
        exit(1);
    
    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    // 출력
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}