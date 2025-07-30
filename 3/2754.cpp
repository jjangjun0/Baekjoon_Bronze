// 어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.
// A+: 4.3, A0: 4.0, A-: 3.7
// B+: 3.3, B0: 3.0, B-: 2.7
// C+: 2.3, C0: 2.0, C-: 1.7
// D+: 1.3, D0: 1.0, D-: 0.7
// F: 0.0

/*
 * cout << str;	          => ABCDE	 str 이후의 메모리도 우연히 연속된 문장처럼 해석되어 출력
 * for문을 이용한 str 출력 =>	ABC	  str 배열 안의 유효한 부분만 읽고 '\0'에서 멈춤
*/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main(void)
{
    char credit[3];
    double grade = 0.0;
    cin >> credit;

    switch (credit[0]) {
        case 'A':
            grade += 4;
            break;
        case 'B':
            grade += 3;
            break;
        case 'C':
            grade += 2;
            break;
        case 'D':
            grade += 1;
            break;
        case 'F':
            grade += 0;
            break;
        default:
            exit(1);
    }

    if (credit[0] == 'F') {
        if (strlen(credit) != 1)
            exit(2);
    }
    else {
        if (strlen(credit) != 2)
            exit(2);
        
        switch (credit[1]) {
            case '+':
                grade += 0.3;
                break;
            case '0':
                break;
            case '-':
                grade -= 0.3;
                break;
            default:
               exit(4);
        }
    }
    cout << fixed << setprecision(1) << grade;

    return 0;
}