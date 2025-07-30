#include <iostream>

#define COWS 10
using namespace std;

int main(void)
{
    int N, cow_n, position, count, i, j;
    cin >> N;
    if (N < 1 || N > 100)
        exit(1);
    
    int cow[N + 1];
    for (i = 0; i <= N; i++)
        cow[i] = -1;

    count = 0;
    for (i = 0; i < N; i++) {
        cin >> cow_n >> position;
        if (cow_n < 1 || cow_n > COWS)
            exit(1);
        if (position != 1 && position != 0)
            exit(1);

        if (cow[cow_n] == -1) {
            cow[cow_n] = position;
        }
        else if (cow[cow_n] != position) {
            // cout << "  " << cow_n << ": " << cow[cow_n] << " -> " << position << "\n";
            cow[cow_n] = position;
            count++;
        }
    }
    cout << count;

    return 0;
}