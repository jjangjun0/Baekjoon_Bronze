#include <iostream>
#include <cstring>

using namespace std;
#define N 26        // 알파벳 개수
#define ALPHA 97    // 'a'의 ASCII 값
#define SIZE 100

int main(void)
{
    char str[SIZE+1];
    int locate[N+1];
    int compare, i, j;

    cin >> str;
    for (i = 0; i < N; i++)
        locate[i] = -1;     // -1로 초기화

    for (i = 0; i < N; i++) {
        for (j = 0; j < strlen(str); j++) {
            if (str[j] == (char)(i + ALPHA)) {
                locate[i] = j;
                break;      // 처음에 등장한 위치만 궁금하다.
            }
        }
    }

    for (i = 0; i < N; i++)
        cout << locate[i] << " ";

    return 0;
}