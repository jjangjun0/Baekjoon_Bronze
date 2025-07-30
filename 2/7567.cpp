#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 50
#define N 10
#define M 5
#define INSIDE 1   // 제대로
#define UPSIDE -1    // 거꾸로


int main(void)
{
    int before, is_first, length, height = 0, i;
    char str[SIZE+1];

    cin >> str;
    length = strlen(str);
    is_first = 1;
    for (i = 0; i < length; i++) {
        // 높이 계산
        if (is_first) {
            height += N;
            is_first = 0;
        }
        else if (before == INSIDE && str[i] == ')')
            height += N;
        else if (before == UPSIDE && str[i] == '(')
            height += N;
        else
            height += M;

        if (str[i] == '(')
            before = INSIDE;
        else if (str[i] == ')')
            before = UPSIDE;
    }
    cout << height;

    return 0;
}