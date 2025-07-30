// 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다! //
// 첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다. //

#include <iostream>

using namespace std;

int main(void)
{
    // int => 2^(16) == 65,536 = 10^(4)
    // long => 2^(32) == 4,294,967,296 = 10^(9)
    // long long => 2^(64) = 10^(19)

    unsigned long long int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << "\n";

    return 0;
}