#include <iostream>

using namespace std;

int main(void)
{
    int x1, x2, greatest_divisor, least_multiple, m1, m2, i;
    cin >> x1 >> x2;
    if (x1 < 1 || x1 > 10000)
        exit(1);
    if (x2 < 1 || x2 > 10000)
        exit(1);

    // 최대공약수
    if (x1 >= x2) {
        for (i = 1; i <= x2; i++) {
            if (x1 % i == 0 && x2 % i == 0)
                greatest_divisor = i;
        }
    }
    else {
        for (i = 1; i <= x1; i++) {
            if (x1 % i == 0 && x2 % i == 0)
                greatest_divisor = i;
        }
    }
    // 최대공배수
    m1 = x1 / greatest_divisor;
    m2 = x2 / greatest_divisor;
    least_multiple = greatest_divisor * m1 * m2;

    cout << greatest_divisor << "\n" << least_multiple;

    return 0;
}