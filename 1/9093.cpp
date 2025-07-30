#include <iostream>
#include <cstring>

#define SIZE1 20
#define SIZE2 1000

using namespace std;

int main(void)
{
    char str[SIZE2+1];
    char word[SIZE1+1];
    int T, word_length, str_length, word_idx, str_idx, i, j;
    cin >> T;
    if (T < 1)
        exit(1);
    cin.get();      // 개행문자 제거

    for (i = 0; i < T; i++) {
        cin.getline(str, SIZE2+1, '\n'); // cin.getline(str, SIZE2+1); 와도 동일한 동작
        str_length = strlen(str);

        str_idx = 0;
        word_idx = 0;
        while (1) {
            if (str[str_idx] == ' ' || str[str_idx] == '\0') {
                word[word_idx] = '\0';

                word_length = strlen(word);
                for (j = word_length-1; j >= 0; j--)
                    cout << word[j];
                cout << " ";
                word_idx = 0;
            }
            else {
                word[word_idx++] = str[str_idx];
            }

            if (str_idx == str_length)
                break; // str 배열 범위를 넘어서면 loop 종료
            str_idx++;
        }
        cout << "\n";
    }

    return 0;
}