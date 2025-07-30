#include <iostream>

using namespace std;

#define SIZE 100

int main(void)
{
    char ch;
    char word[SIZE + 1];
    int i = 0;
    
    while (cin.read(&ch, 1)) {
        if (ch >= 'a' && ch <= 'z') {
            word[i++] = ch-32;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            word[i++] = ch+32;
        }
        else {
            break; // 영어 소문자, 대문자만을 읽도록 설정
        }
        if (i == SIZE + 1)
            break;
    }
    word[i] = '\0';
    cout << word;

    return 0;
}