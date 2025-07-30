// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

#include <iostream>

using namespace std;

int main(void)
{
    long int n;
    cin >> n;
    if (n <= 0 || n > 100000)
        exit(1);
    for (int i = 1; i <= n; i++)
        cout << i << "\n";

    return 0;
}