#include <iostream>
#include <iomanip>

using namespace std;
#define PI 3.141592

int main(void)
{
    long int d1, d2;
    cin >> d1;
    cin >> d2;
    if (d1 < 1 || d1 > 100000)
        exit(1);
    if (d2 < 1 || d2 > 100000)
        exit(1);

    cout << fixed << setprecision(6) << 2 * d2 * PI + 2 * d1;

    return 0;
}