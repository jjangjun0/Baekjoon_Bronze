#include <iostream>

using namespace std;

int main(void)
{
    int n1, n2, n3, result, max;
    cin >> n1 >> n2 >> n3;

    if (n1 < 1 || n1 > 6)
        exit(1);
    if (n2 < 1 || n2 > 6)
        exit(1);
    if (n3 < 1 || n3 > 6)
        exit(1);

    // 규칙 1
    if (n1 == n2 && n2 == n3)
        result = 10000 + n1 * 1000;
    // 규칙 2
    if (n1 == n2 && n2 != n3)
        result = 1000 + n1 * 100;
    if (n2 == n3 && n1 != n2)
        result = 1000 + n2 * 100;
    if (n3 == n1 && n3 != n2)
        result = 1000 + n3 * 100;
    // 규칙 3
    if (n1 != n2 && n2 != n3 && n3 != n1) {
        max = n1;
        if (max < n2)
            max = n2;
        if (max < n3)
            max = n3;
        result = max * 100;
    }
    cout << result;

    return 0;
}