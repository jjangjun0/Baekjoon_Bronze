#include <iostream>

using namespace std;
#define MAX 100

int main(void)
{
    int M, N, i, temp, min, sum = 0;
    cin >> M;
    cin >> N;

    if (M < 1 || M > 10000)
        exit(1);
    if (N < 1 || N > 10000)
        exit(1);

    min = -1;
    for (i = 1; i <= MAX; i++) {
        temp = i * i;
        if (temp >= M && temp <= N) {
            if (min == -1)
                min = temp;
            sum += temp;
        }
    }
    if (sum == 0)
        cout << -1;
    else
        cout << sum << "\n" << min;

    return 0;
}