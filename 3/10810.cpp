#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    int i, j, k, t, a, b;
    cin >> n >> m;
    if (n < 1 || n > 100)
        exit(1);
    if (m < 1 || m > 100)
        exit(1);

    int baguni[n+1] = { 0 };

    for (t = 0; t < m; t++) { // m번 반복
        cin >> i >> j >> k;
        if (i < 1 || i > n)
            exit(1);
        if (j < 1 || j > n)
            exit(1);
        if (k < 1 || k > n)
            exit(1);

        // n : 바구니 개수
        // i-1 ~ j-1 인덱스에 k번 공 집어넣기
        for (a = i-1; a <= j-1; a++)
            baguni[a] = k;
    }
    
    for (t = 0; t < n; t++) {
        cout << baguni[t] << " ";
    }

    return 0;
}