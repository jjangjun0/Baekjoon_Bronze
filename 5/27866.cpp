#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 1000

int main(void)
{
    char word[SIZE + 1];
    int order;
    cin >> word;
    cin >> order;
    if (order < 1 || order > strlen(word))
        exit(1);
    
    for (int i = 0; i < strlen(word); i++) {
        if (!((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')))
            exit(1); // 영어 소문자, 대문자로만 이루어진 단어인지 확인
    }
    cout << word[order-1];

    return 0;
}