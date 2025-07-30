#include <iostream>

using namespace std;

int main(void)
{
    long int n, added, generator = 0, i, temp;
    cin >> n;
    if (n < 1 || n > 1000000)
        exit(1);

    // 분해합
    for (i = 1; i < n; i++) {
        added = 0;
        // step 1. N을 더한다
        added += i;
        // step 2. 자리수를 더한다.
        temp = i;
        while (1) {
            if (temp / 10 == 0 && temp % 10 == 0)
                break;
            
            added += temp % 10; // 어차피 자리수 다 더할거여서 역순서여도 상관없음
            temp /= 10;
        }
        if (added == n) {
            generator = i;
            break; // 가장 작은 생성자
        }
    }
    cout << generator;

    return 0;
}