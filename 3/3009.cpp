#include <iostream>

using namespace std;
#define N 2

int main(void)
{
    int x1[N], x2[N], x3[N], x4[N];
    int i;

    cin >> x1[0] >> x1[1];
    cin >> x2[0] >> x2[1];
    cin >> x3[0] >> x3[1];
    if (x1[0] < 1 || x1[0] > 1000 || x1[1] < 1 || x1[1] > 1000)
        exit(1);
    if (x2[0] < 1 || x2[0] > 1000 || x2[1] < 1 || x2[1] > 1000)
        exit(1);
    if (x3[0] < 1 || x3[0] > 1000 || x3[1] < 1 || x3[1] > 1000)
        exit(1);

    if (x1[0] == x2[0])
        x4[0] = x3[0];
    if (x1[0] == x3[0])
        x4[0] = x2[0];
    if (x2[0] == x3[0])
        x4[0] = x1[0];

    if (x1[1] == x2[1])
        x4[1] = x3[1];
    if (x1[1] == x3[1])
        x4[1] = x2[1];
    if (x2[1] == x3[1])
        x4[1] = x1[1];
    cout << x4[0] << " " << x4[1];

    return 0;
}