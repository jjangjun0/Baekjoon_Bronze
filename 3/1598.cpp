#include <iostream>
#include <cmath>

using namespace std;
#define WIDTH 4

int main(void)
{
    long int x1, x2, length_x, length_y;

    cin >> x1 >> x2;
    if (x1 < 1 || x1 > 10000000)
        exit(1);
    if (x2 < 1 || x2 > 10000000)
        exit(1);

    // 4의 배수라면 조정을 해줘야 한다.
    // ex) 4 / 4 = 1 이지만 0열, 4 % 4 = 0 이지만 4행
    length_x = labs(
        (x2 % WIDTH == 0 ? x2 / WIDTH - 1 : x2 / WIDTH) -
        (x1 % WIDTH == 0 ? x1 / WIDTH - 1 : x1 / WIDTH)
    );
    length_y = labs(
        (x2 % WIDTH == 0 ? WIDTH : x2 % WIDTH) -
        (x1 % WIDTH == 0 ? WIDTH : x1 % WIDTH)
    );

    cout << length_x + length_y;

    return 0;
}