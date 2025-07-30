#include <iostream>

using namespace std;

int main(void)
{
    int N, min_h, max_h, gap_h, before_h, now_h, is_uphill, i;
    cin >> N;
    if (N < 1 || N > 1000)
        exit(1);

    before_h = -1;
    gap_h = 0;
    min_h = max_h = -1;
    is_uphill = 0;
    for (i = 0; i < N; i++) {
        cin >> now_h;
        if (now_h < 1 || now_h > 1000)
            exit(1);

        if (before_h == -1) {
            before_h = now_h;
            continue;
        }

        if (now_h > before_h)
            is_uphill = 1;
        else
            is_uphill = 0; // 높이가 연속적으로 증가하지 않으면 오르막길이 아니다.

        if (is_uphill) {
            if (min_h == -1)
                min_h = before_h;
            max_h = now_h;
            // cout << "min_h, max_h : " << min_h << " " << max_h << "\n";

            if (i == N-1 && gap_h < (max_h - min_h)) {
                gap_h = max_h - min_h;
                // cout << i+1 << "번째 gap_h: " << gap_h << "\n";
            }
        }
        else if (!is_uphill){
            if (min_h > 0 && gap_h < (max_h - min_h)) {
                gap_h = max_h - min_h;
                // cout << i+1 << "번째 gap_h: " << gap_h << "\n";
            }
            min_h = -1;
        }

        before_h = now_h; // 현재의 높이는 나중의 높이가 된다.
    }

    cout << gap_h;

    return 0;
}