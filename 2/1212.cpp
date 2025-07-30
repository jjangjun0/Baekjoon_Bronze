#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 333334

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    
    char str[SIZE+1];
    long int i, length;
    int n, x1, x2, x3;
    cin >> str;

    n = (int)(str[i] - '0');
    x3 = n % 2;
    n /= 2;
    x2 = n % 2;
    n /= 2;
    x1 = n % 2;
    
    // 수가 0인 경우를 제외하고 반드시 1로 시작해야 한다.
    if (!strcmp(str, "0"))
        cout << "0";            // Check Point 1. 0이면 0을 출력
    else if (x1 != 0)
        cout << x1 << x2 << x3;
    else if (x1 == 0 && x2 != 0)
        cout << x2 << x3;
    else if (x1 == 0 && x2 == 0)
        cout << x3;

    length = strlen(str);       // Check Point 2. for문에 strlen()을 넣으면 반복할 때마다 O(N)이 호출되어 전체적으로 O(N^2)
    for (i = 1; i < length; i++) {
        n = (int)(str[i] - '0');
        x3 = n % 2;
        n /= 2;
        x2 = n % 2;
        n /= 2;
        x1 = n % 2;

        cout << x1 << x2 << x3;
    }

    return 0;
}