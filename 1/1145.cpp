#include <iostream>

#define N 5
#define CUTLINE 3
using namespace std;

int main(void)
{
    int num[N];
    int count, i, k;
    
    for (i = 0; i < N; i++) {
        cin >> num[i];
        if (num[i] < 1 || num[i] > 100)
            exit(1);
    }

    k = 1;
    while (1) {
        count = 0;
        for (i = 0; i < N; i++) {
            if (k % num[i] == 0)
                count++;
        }
        if (count >= CUTLINE)
            break;

        k++;
    }
    cout << k;  // 적어도 대부분의 배수

    return 0;
}