#include <iostream>
#include <cmath>

#define N 10
#define GAIL 100
using namespace std;

int main(void)
{
    int sum = 0, i, j;
    int score[N];

    for (i = 0; i < N; i++) {
        cin >> score[i];
        if (score[i] < 1 || score[i] > 100)
            exit(1);
    }

    for (i = 0; i < N; i++) {
        sum += score[i];
        // cout << "  " << i+1 << "번 째 sum: " << sum << "\n";
    
        if (sum == GAIL)
            break;
        if (sum > GAIL) {
            if (abs(sum - GAIL) > abs( GAIL - (sum - score[i]) )) {
                sum -= score[i];
                break;
            }
            else
                break;
        }
    }
    cout << sum;

    return 0;
}