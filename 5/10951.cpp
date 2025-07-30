// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력은 여러 개의 테스트 케이스로 이루어져 있다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    while (1) {
        if (!(cin >> a >> b))   // 입력에 제한이 없다면, 파일의 끝에 도달하게 되고, cin에 오류가 생길 것이다.
            break;              // 그러니 이에 대한 루프 종료를 통해 구현한다.

        if (a <= 0 || b >= 10)
            exit(1);
        cout << a + b << std::endl;
        cin.ignore();
    }
    return 0;
}