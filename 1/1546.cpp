#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int N, max, i;
    long double sum = 0;
    cin >> N;
    if (N < 1 || N > 1000)
        exit(1);

    int num[N];
    for (i = 0; i < N; i++) {
        cin >> num[i];
        if (num[i] < 0 || num[i] > 100)
            exit(1);
    }

    // 최대값 찾기
    max = num[0];
    for (i = 0; i < N; i++) {
        if (max < num[i])
            max = num[i];
    }

    // 성적 조정 : score / max * 100
    for (i = 0; i < N; i++) {
        sum += (double)num[i] / max * 100;
    }

    cout << fixed << setprecision(2) << sum / N;

    return 0;
}