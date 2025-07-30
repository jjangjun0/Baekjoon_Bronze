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
        cout << "0";
    else if (x1 != 0)
        cout << x1 << x2 << x3;
    else if (x1 == 0 && x2 != 0)
        cout << x2 << x3;
    else if (x1 == 0 && x2 == 0)
        cout << x3;

    length = strlen(str);
    for (i = 1; i < length; i++) {
        n = (int)(str[i] - '0');
        switch (n) {
            case 0: cout << "000"; break;
            case 1: cout << "001"; break;
            case 2: cout << "010"; break;
            case 3: cout << "011"; break;
            case 4: cout << "100"; break;
            case 5: cout << "101"; break;
            case 6: cout << "110"; break;
            case 7: cout << "111"; break;
        }
    }

    return 0;
}