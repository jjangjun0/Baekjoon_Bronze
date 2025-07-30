#include <iostream>

using namespace std;
#define SIZE 4

int main(void)
{
    int temp, sum1 = 0, sum2 = 0, i;

    for (i = 0; i < SIZE; i++) {
        cin >> temp;
        sum1 += temp;
    }
    for (i = 0; i < SIZE; i++) {
        cin >> temp;
        sum2 += temp;
    }
    if (sum1 >= sum2)
        cout << sum1;
    else
        cout << sum2;

    return 0;
}