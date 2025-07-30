#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    unsigned int a, b, c, max;

    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break; // "0 0 0" 입력 시 loop 종료

        if (a <= 0 || a > 30000)
            exit(1);
        if (b <= 0 || b > 30000)
            exit(1);
        if (c <= 0 || c > 30000)
            exit(1);

        if (a >= b && a >= c)
            max = a;
        if (b >= a && b >= c)
            max = b;
        if (c >= a && c >= b)
            max = c;

        // 삼각형 조건: 빗변이 아닌 두 변의 길이의 합 > 빗변의 길이
        if (max == a) {
            if (a > b + c) exit(2);

            if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
                cout << "right";
            else
                cout << "wrong";
        }
        else if (max == b) {
            if (b > a + c) exit(2);

            if (pow(b, 2) == (pow(a, 2) + pow(c, 2)))
                cout << "right";
            else
                cout << "wrong";
        }
        else if (max == c) {
            if (c > a + b) exit(2);

            if (pow(c, 2) == (pow(a, 2) + pow(b, 2)))
                cout << "right";
            else
                cout << "wrong";
        }
        cout << "\n";
    }

    return 0;
}