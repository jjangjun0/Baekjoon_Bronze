#include <iostream>

using namespace std;

int main(void)
{
    int N, k, min_idx, temp, i, j;
    cin >> N >> k;
    if (N < 1 || N > 1000)
        exit(1);
    if (k < 1 || k > N)
        exit(1);

    int x[N];
    for (i = 0; i < N; i++) {
        cin >> x[i];
        if (x[i] < 0 || x[i] > 10000)
            exit(1);
    }
    // x[] 오름차순 정렬
    for (i = 0; i < N; i++) {
        min_idx = i;
        for (j = i; j < N; j++) {
            if (x[min_idx] > x[j])
                min_idx = j;
        }
        temp = x[i];
        x[i] = x[min_idx];
        x[min_idx] = temp;
    }
    cout << x[N-k]; // 뒤에서부터 k등까지

    return 0;
}