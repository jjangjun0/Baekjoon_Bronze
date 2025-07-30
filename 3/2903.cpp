#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    // 중앙 이동 알고리즘
    // 한 변에 생기는 꼭짓점을 중심으로 생각 => 2 * (section) + 1

    // 1 x 1 => 3 x 3 => 9 x 9 => 17 x 17
    // 0번      1번         2번     3번
    //          2부분       4부분   8부분

    int n, section, i;
    long int vertex;
    cin >> n;
    if (n < 1 || n > 15)
        exit(1);

    section = 1;
    for (i = 1; i <= n; i++)
        section *= 2;
    vertex = pow(section+1, 2);
    cout << vertex;
    return 0;
}