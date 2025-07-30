// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오. //
// 첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다. //
// -10,000 ≤ A, B ≤ 10,000 //

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << ">";
    else if (a == b)
        cout << "==";
    else
        cout << "<";

    return 0;
}