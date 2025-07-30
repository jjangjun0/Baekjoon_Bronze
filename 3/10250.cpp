#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    int h, w, n, i, j;

    for (i = 0; i < t; i++) {
        cin >> h >> w >> n; // 테스트 데이터 개수

        if (h < 1 || h > 99)
            exit(1);
        if (w < 1 || w > 99)
            exit(1);
        if (n < 1 || n > h * w)
            exit(1);

        for (j = 1; j <= w; j++) {
            n -= h;
            if (n <= 0) {
                n += h; // 다시 양수로 복구
                cout << n << setw(2) << setfill('0') << j << "\n";
                break;
            }
        }
    }

    return 0;
}