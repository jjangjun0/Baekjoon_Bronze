#include <iostream>

using namespace std;

#define L 50
#define N 31
#define M 1234567891

int main(void)
{
    char str[L+1];
    long long int temp, result = 0;
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 50)
        exit(1);

    cin >> str;
    for (i = 0; i < n; i++) {
        temp = 1;
        for (j = 0; j < i; j++) {
            temp = (temp * N) % M;
        }
        result += ((str[i] - 'a' + 1) * temp) % M; // result += (str[i] - 'a' + 1) * pow(N, i); // overflow
    }
    cout << result % M;

    return 0;
}

/*
unsigned long long의 표현 가능한 범위는 2^64-1 = 1.8446744e+19입니다.

10행의 unsigned long long r = pow(31, i); 에서
i에 49가 입력될 경우 31^49 = 1.1932268e+73 입니다. unsigned long long 보다 큰 수이므로, 오버플로우가 발생합니다.
C++로 이 문제를 풀 경우 오버플로우를 피하기 위해
합동식(정수론)에 대한 지식이 필요합니다.



간단히 힌트를 드리자면
(123456789*123456789)%1234567 의 결과와,
((123456789%1234567)*(123456789%1234567))%1234567 의 결과가 같습니다. 이런 성질을 활용할 수 있습니다.
*/