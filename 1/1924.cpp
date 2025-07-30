#include <iostream>

#define DAY 7
static int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

using namespace std;

int last_month_days(int n) {
    int i, result = 0;
    for (i = 0; i < n-1; i++)
        result += days[i];
    return result;
}

int main(void)
{
    // 2007년 1월 1일 : 월요일 => Default     // days = 31 * 7 + 4 * 30 + 28; => 365일

    int x, y, tatal;
    cin >> x >> y;
    if (x < 0 || x > 12)
        exit(1);
    if (y < 0 || y > 31)
        exit(1);
    if (y > days[x-1])
        exit(1);
    
    tatal = last_month_days(x) + y;
    switch (tatal % DAY) {
        case 0: cout << "SUN"; break;
        case 1: cout << "MON"; break;
        case 2: cout << "TUE"; break;
        case 3: cout << "WED"; break;
        case 4: cout << "THU"; break;
        case 5: cout << "FRI"; break;
        case 6: cout << "SAT"; break;
    }

    return 0;
}