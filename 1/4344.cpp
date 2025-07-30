#include <iostream>
#include <iomanip>

#define PERSENT 100
using namespace std;

int main(void)
{
    int C, N, score, total, i, j, count;
    double student_avg = 0.0;
    cin >> C;
    if (C < 1)
        exit(1);


    for (i = 0; i < C; i++) {
        cin >> N;
        if (N < 1 || N > 1000)
            exit(1);

        int num[N] = { 0 };
        total = count = 0;
        for (j = 0; j < N; j++) {
            cin >> num[j];
            if (num[j] < 0 || num[j] > 100)
                exit(1);
            total += num[j];
        }
        student_avg = (double)total / N;
        for (j = 0; j < N; j++) {
            if (num[j] > student_avg)
                count++;
        }
        // cout << "count: " << count << ", " << "N: " << N << "\n";
        cout << fixed << setprecision(3) << (double)count / N * PERSENT << "%" << "\n";
    }

    return 0;
}