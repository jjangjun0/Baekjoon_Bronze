// 0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.
// 첫째 줄에 정수 N(0 ≤ N ≤ 12)이 주어진다.

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    unsigned long int result = 1;
    cin >> n;
    if (n < 0 || n > 12)
        exit(1);

    for (int i = n; i > 0; i--)
        result *= i;
    cout << result;

    return 0;
}