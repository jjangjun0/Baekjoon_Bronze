#include <iostream>

using namespace std;

int main(void)
{
    int n, temp, is_prime, count = 0, i, j;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp < 1 || temp > 1000)
            exit(1);

        if (temp == 1)
            continue; // 1은 소수가 아니다.
        
        is_prime = 1;
        for (j = 2; j < temp; j++) {
            if (temp % j == 0) { // temp보다 작은 자연수의 배수라면 소수가 아니다.
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            count++;
    }
    cout << count;

    return 0;
}