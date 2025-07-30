#include <iostream>
#include <math.h>

using namespace std;

#define N 4

int main(void)
{
    int a[N+1];
    int max_idx, min_idx, middle_value, i;
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    for (i = 0; i < N; i++) {
        if (a[i] < 0 || a[i] > 10000)
            exit(1);
    }

    // 1. 최대, 최소 index 찾기
    max_idx = min_idx = 0;
    for (i = 1; i < N; i++) {
        if (a[max_idx] < a[i])
            max_idx = i;
        if (a[min_idx] > a[i])
            min_idx = i;
    }

    // 2. 최대, 최소가 아닌 친구들 짝짓기
    middle_value = 0;
    for (i = 0; i < N; i++) {
        if (i != max_idx && i != min_idx) // 값의 비교가 아닌 index로 판단
            middle_value += a[i];
    }
    // 3. 출력
    if (a[max_idx] == a[min_idx])
        cout << 0; // 모두가 같은 수
    else
        cout << abs(a[max_idx] + a[min_idx] - middle_value);
    
    return 0;
}