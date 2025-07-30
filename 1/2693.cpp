#include <iostream>

#define N 10
#define WANT 8
using namespace std;

int main(void)
{
    int T, t, i, j, min_idx, temp;
    cin >> T;
    if (T < 1 || T > 1000)
        exit(1);

    int A[N];
    for (t = 0; t < T; t++) {
        for (i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] < 1 || A[i] > 1000)
                exit(1);
        }

        for (i = 0; i < N; i++) {
            min_idx = i;
            for (j = i; j < N; j++) {
                if (A[min_idx] > A[j])
                    min_idx = j;
            }
            temp = A[i];
            A[i] = A[min_idx];
            A[min_idx] = temp;
        }
        cout << A[WANT-1] << "\n";
    }

    return 0;
}