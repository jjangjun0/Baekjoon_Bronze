#include <iostream>

using namespace std;

int main(void)
{
    long int n, max, min, temp, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp < -1000000 || temp > 1000000)
            exit(1);

        if (i == 0)
            max = min = temp; // max, min의 초기값은 처음에 온 정수다.

        if (i != 0 && temp > max)
            max = temp;
        if (i != 0 && temp < min)
            min = temp;
    }
    cout << min << " " << max;

    return 0;
}