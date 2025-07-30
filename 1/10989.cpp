#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    // 시간 초과. => 메모이제이션

    long int N, min_idx, i, j;
    int temp;
    cin >> N;
    if (N < 1 || N > 10000000)
        exit(1);

    int num[N];
    for (i = 0; i < N; i++) {
        cin >> num[i];
        if (num[i] < 1 || num[i] > 10000)
            exit(1);
    }

    for (i = 0; i < N; i++) {
        min_idx = i;
        for (j = i; j < N; j++) {
            if (num[min_idx] > num[j])
                min_idx = j;
        }
        temp = num[i];
        num[i] = num[min_idx];
        num[min_idx] = temp;
    }

    for (i = 0; i < N; i++)
        cout << num[i] << "\n";

    return 0;
}