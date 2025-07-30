#include <iostream>

using namespace std;
#define N 10
const int DIVIDER = 42;

int main(void)
{
    int remainder[N+1];  // 입력된 수를 42로 나눈 나머지를 순서대로 저장하는 배열
    int remain_set[N+1]; // 집함 (중복 X)
    int temp, i, j, is_exist, idx = 0;

    for (i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0 || temp > 1000)
            exit(1);
        
        remainder[i] = temp % DIVIDER;

        if (i == 0) {
            remain_set[idx++] = remainder[i];
        }
        else {
            is_exist = 0;
            for (j = 0; j < idx; j++) {
                if (remainder[i] == remain_set[j]) {
                    is_exist = 1;
                    break; // 중복된 것이 하나라도 있으면 loop 종료
                }
            }
            if (!is_exist) {
                remain_set[idx++] = remainder[i];
            }
        }
    }
    cout << idx;

    return 0;
}