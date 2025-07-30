#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a < 1 || a > 1000)
        exit(1);
    if (b < 1 || b > 1000)
        exit(1);
    if (c < 1 || c > 1000)
        exit(1);

    // 1. a, b, c를 모두 수로 생각
    cout << a + b - c << "\n";
    
    // 2. a, b, c를 문자열로 생각
    string A, B;
    char *end;
    long int result;

    A = to_string(a);
    B = to_string(b);
    A.append(B);

    result = stol(A);   // c에선 strtol() -> c++에서 stol() 함수
    result -= (long)c;
    cout << result;

    return 0;
}