#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
    long int N, temp, quotient;
    int F, num, before;

    cin >> N;
    cin >> F;

    if (N < 100 || N > 2000000000)
        exit(1);
    if (F < 1 || F > 100)
        exit(1);
    
    before = N % 100;
    N -= before;    // 먼저 뒷자리를 00으로 만든다.

    quotient = ceil(N / F);
    if (N / 100 != (quotient * F) / 100)
        quotient++; // 뒤에 두 자리를 제외하고는 같아야 한다.

    cout << setw(2) << setfill('0') << (quotient * F) % 100;

    return 0;
}