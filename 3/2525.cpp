#include <iostream>

using namespace std;
#define CONVERT 60

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int h, m, times, add_h, add_m;
    cin >> h >> m;
    if (h < 0 || h > 23)
        exit(1);
    if (m < 0 || m > 59)
        exit(1);

    cin >> times;
    if (times < 0 || times > 1000)
        exit(1);

    add_h = times / CONVERT;
    add_m = times % CONVERT;

    // 분 계산
    m += add_m;
    if (m >= CONVERT) {
        m -= CONVERT;
        h += 1;
    }
    // 시간 계산
    h += add_h;
    while (h >= 24)
        h -= 24;
    
    cout << h << " " << m;

    return 0;
}