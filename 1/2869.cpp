#include <iostream>

using namespace std;

int main(void)
{
    long int A, B, V, observe;

    cin >> A >> B >> V;
    if (B < 1 || B >= A)
        exit(1);
    if (A <= B || A > V)
        exit(1);
    if (V < A || V > 1000000000)
        exit(1);

    V -= A; // 마지막 낮에 정상에 올라가면 미끄러지지 않는다.
    observe = 1;    // 마지막 날(+1)
    // 마지막 날을 제외하고 계산
    if (V % (A-B) == 0)
        observe += V / (A-B);
    else
        observe += V / (A-B) + 1;

    cout << observe;

    return 0;
}