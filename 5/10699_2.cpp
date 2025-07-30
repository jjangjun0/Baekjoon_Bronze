#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    // 현재 UTC 시간
    std::time_t now = std::time(nullptr);

    // 서울 시간은 UTC + 9시간
    now += 9 * 60 * 60;  // 9시간 * 60분 * 60초

    // 구조체로 변환
    std::tm *seoul_tm = std::gmtime(&now); // gmtime은 UTC 기준으로 localtime처럼 구조화해줌

    // YYYY-MM-DD 형식 출력
    std::cout << std::put_time(seoul_tm, "%Y-%m-%d") << std::endl;

    return 0;
}