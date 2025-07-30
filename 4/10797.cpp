#include <iostream>

using namespace std;
#define N 5

int main(void)
{
    int X, i, temp, count = 0;

    cin >> X;
    if (X < 0 || X > 9)
        exit(1);

    for (i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0 || temp > 9)
            exit(1);

        if (temp == X)
            count++;
    }
    cout << count;

    return 0;
}