#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    unsigned long int A, B, C, branch;
    cin >> A >> B >> C;
    if (A < 1 || A > 2100000000)
        exit(1);
    if (B < 1 || B > 2100000000)
        exit(1);
    if (C < 1 || C > 2100000000)
        exit(1);

    // A : 고정 비용 (월세)
    // B : 가변 비용 (생산 비용)
    // C : 판매가

    if (C <= B)
        cout << -1; // 생산 비용이 판매가보다 낮으면 손익분기점이 존재하지 않음
    else {
        branch = ceil((long double)A / (C - B));
        if (A % (C - B) == 0)
            branch += 1; // 나누어 떨어지면 +1 더 커야 손익분기점이다.
        
        cout << branch;
    }

    return 0;
}