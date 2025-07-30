#include <iostream>
#include <math.h>

using namespace std;
#define N 5
#define M 10

int main(void)
{
    int i, temp, sum = 0;
    for (i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0 || temp > 10)
            exit(1);
        sum += pow(temp, 2);
    }
    cout << sum % M;

    return 0;
}