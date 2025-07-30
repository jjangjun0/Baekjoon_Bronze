// 서울의 오늘 날짜를 출력하는 프로그램을 작성하시오. //

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
    time_t seconds = time(NULL);
    struct tm *now = localtime(&seconds);

    cout << 1900 + now->tm_year << "-"
         << setw(2) << setfill('0') << now->tm_mon + 1 << "-"
         << setw(2) << setfill('0') << now->tm_mday << "\n";

    return 0;
}