#include <iostream>

using namespace std;

#define MOVETIME 45
#define HOUR 24
#define MIN 60

int main(void)
{
    int h, m;
    cin >> h >> m;

    if (h < 0 || h > 23)
        exit(1);
    if (m < 0 || m > 59)
        exit(1);

    m -= MOVETIME;
    if (m < 0) {
        h -= 1;
        m += MIN;
    }
    if (h < 0) {
        h += HOUR;
    }

    cout << h << " " << m;

    return 0;
}