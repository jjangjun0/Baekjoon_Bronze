#include <iostream>

using namespace std;
#define N 5
#define F 40

int main(void)
{
    int score[N+1];
    int i, temp, sum = 0;
    for (i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0 || temp > 100 || (temp % 5) != 0)
            exit(1);

        if (temp < F)
            score[i] = F;
        else
            score[i] = temp;
    }

    for (i = 0; i < N; i++) {
        sum += score[i];
    }
    cout << sum / 5;

    return 0;
}