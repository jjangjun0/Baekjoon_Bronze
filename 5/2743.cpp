// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

// 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 100
int main(void)
{
    char str[SIZE + 1]; // 단어 길이(100) + NULL 문자(1)
    cin >> str;
    for (int i = 0; i < strlen(str); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            break;
    }
    cout << strlen(str);

    return 0;
}