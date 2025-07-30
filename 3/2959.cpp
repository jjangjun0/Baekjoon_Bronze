#include <iostream>

using namespace std;
#define N 4

int main(void)
{
    // 거북이
    int d[N];
    int i, j, min_idx, temp;
    cin >> d[0] >> d[1] >> d[2] >> d[3];

    for (i = 0; i < N; i++) {
        if (d[i] < 0 || d[i] > 100)
            exit(1);
    }

    for (i = 0; i < N; i++) {
        min_idx = i;
        for (j = i; j < N; j++) {
            if (d[min_idx] > d[j])
                min_idx = j;
        }
        temp = d[i];
        d[i] = d[min_idx]; // i번째에 최소값을 저장
        d[min_idx] = temp;
    }

    cout << d[2] * d[0];

    return 0;
}