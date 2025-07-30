#include <iostream>

#define N 7
#define M 9
#define GAIL 100
using namespace std;

int sum_XX(int x, int y, int height[]) {
    int i, sum = 0;
    for (i = 0; i < M; i++) {
        if (i == x || i == y)
            continue;
        sum += height[i];
    }
    return sum;
}

int main(void)
{
    int height[M];
    int i, j, min_idx, temp, is_find;
    int exclude1, exclude2;     // 제외시킬 2명의 난쟁이
    for (i = 0; i < M; i++) {
        cin >> height[i];
        if (height[i] < 1 || height[i] > 100)
            exit(1);
    }

    is_find = 0;
    for (i = 0; i < M-1; i++) {
        exclude1 = i;
        for (j = i+1; j < M; j++) {
            exclude2 = j;
            if (sum_XX(exclude1, exclude2, height) == GAIL)
                is_find = 1;
            if (is_find) break;
        }
        if (is_find) break;
    }

    height[exclude1] = height[exclude2] = -1;
    for (i = 0; i < M; i++) {
        min_idx = i;
        for (j = i; j < M; j++) {
            if (height[min_idx] > height[j])
                min_idx = j;
        }
        temp = height[i];
        height[i] = height[min_idx];
        height[min_idx] = temp;
    }

    for (i = 2; i < M; i++)
        cout << height[i] << "\n";

    return 0;
}