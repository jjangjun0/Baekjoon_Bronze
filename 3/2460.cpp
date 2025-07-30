#include <iostream>

using namespace std;
#define N 10

int main(void)
{
    int temp1, temp2, max, i;
    int now[N] = { 0 };

    for (i = 0; i < N; i++) {
        cin >> temp1 >> temp2; // 내린 사람, 탄 사람
        if (temp1 < 0 || temp1 > 10000)
            exit(1);
        if (temp2 < 0 || temp2 > 10000)
            exit(1);

        if (i == 0)
            now[i] = temp2; // 처음에 내린 사람은 0이다.
        else
            now[i] = now[i-1] - temp1 + temp2;
        if (now[i] < 0 || now[i] > 10000)
            exit(1);
    }
    
    max = now[0];
    for (i = 0; i < N; i++) {
        if (max < now[i])
            max = now[i];
    }
    cout << max;

    return 0;
}