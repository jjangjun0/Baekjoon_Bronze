#include <iostream>

#define N 5

using namespace std;

int main(void)
{
    int n[N];
    int i, j, min_idx, temp;
    for (i = 0; i < N; i++) {
        cin >> n[i];
        if (n[i] < 1 || n[i] >= 100 || n[i] % 10 != 0)
            exit(1);
    }

    for (i = 0; i < N; i++) {
        min_idx = i;
        for (j = i; j < N; j++) {
            if (n[min_idx] > n[j])
                min_idx = j;
        }
        temp = n[i];
        n[i] = n[min_idx];
        n[min_idx] = temp;
    }

    cout << (n[0]+n[1]+n[2]+n[3]+n[4]) / N << "\n";
    cout << n[2];

    return 0;
}