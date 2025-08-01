// X대학 M교수님은 프로그래밍 수업을 맡고 있다. 교실엔 학생이 30명이 있는데,
// 학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있다.
// 교수님이 내준 특별과제를 28명이 제출했는데,
// 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하시오.

// 입력은 총 28줄로 각 제출자(학생)의 출석번호 n(1 ≤ n ≤ 30)가 한 줄에 하나씩 주어진다.
// 출석번호에 중복은 없다.

#include <iostream>

using namespace std;

const int N = 30;
int main(void)
{
    int i, temp;
    int student[N] = { 0 };     // 모두 0으로 초기화
    for (i = 0; i < N-2; i++) {
        cin >> temp;
        if (temp < 1 || temp > 30)
            exit(1);
        
        student[temp-1] = 1; // 출석 부른 학생은 1, 없는 학생은 자동으로 0으로 초기화
    }

    for (i = 0; i < N; i++) {
        if (!student[i])
            cout << i + 1 << "\n";
    }

    return 0;
}