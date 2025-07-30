// 두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오. //
// 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10) //

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;
    if (a > 0 && b < 10)
        cout << a * b;

    return 0;
}