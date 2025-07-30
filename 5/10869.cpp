// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.  //
// 두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000) //

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;
    if (a >= 1 && b <= 10000) {
        cout << a + b << "\n";
        cout << a - b << "\n";
        cout << a * b << "\n";
        cout << a / b << "\n";
        cout << a % b << "\n";
    }

    return 0;
}