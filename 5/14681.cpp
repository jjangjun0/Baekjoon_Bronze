// 흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다.
// 사분면은 아래 그림처럼 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.

// 첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)

#include <iostream>

using namespace std;

int main(void)
{
    int x, y;
    cin >> x;
    if (x < -1000 || x > 1000 | x == 0)
        exit(1);
    cin >> y;
    if (y < -1000 || y > 1000 | y == 0)
        exit(1);
    
    if (x > 0) {
        if (y > 0)
            cout << 1;
        else
            cout << 4;
    }
    else {
        if (y > 0)
            cout << 2;
        else
            cout << 3;
    }

    return 0;
}