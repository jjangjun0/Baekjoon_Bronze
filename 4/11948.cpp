#include <iostream>

using namespace std;
#define N 6

int main(void)
{
    int score[N+1];
    int i, sum = 0, min_idx;
    for (i = 0; i < N; i++) {
        cin >> score[i];
        if (score[i] < 0 || score[i] > 100)
            exit(1);
    }

    // 물리, 화학, 생물, 지구과학 중 택3
    min_idx = 0;
    for (i = 1; i < 4; i++) {
        if (score[min_idx] > score[i])
            min_idx = i;
    }
    for (i = 0; i < 4; i++) {
        if (i != min_idx)
            sum += score[i];
    }

    // 역사, 지리 택1
    min_idx = 4;
    for (i = 4; i < N; i++) {
        if (score[min_idx] > score[i])
            min_idx = i;
    }
    for (i = 4; i < N; i++) {
        if (i != min_idx)
            sum += score[i];
    }
    
    cout << sum;

    return 0;
}