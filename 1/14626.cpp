#include <iostream>

#define SIZE 13
#define WEIGHT1 1
#define WEIGHT2 3
#define DIVIDE 10

using namespace std;

int main(void)
{
    char str[SIZE+1];
    int turn = 0, is_damage = 0, result = 0, weight, find_number, i;

    cin >> str;

    for (i = 0; i < SIZE; i++) {
        if (str[i] == '*') {
            is_damage = 1;
            continue;
        }
        if (!is_damage)
            turn += 1;
        
        if (i % 2 == 0)
            result += ( (str[i] - '0') * WEIGHT1 ) % DIVIDE;
        else
            result += ( (str[i] - '0') * WEIGHT2 ) % DIVIDE;
        result %= DIVIDE;
    }
    // cout << "  " << turn+1 << "-->" << result << "\n";
    // 훼손된 숫자 찾기
    result = DIVIDE - result;
    if (turn % 2 == 0)
        weight = WEIGHT1;
    else
        weight = WEIGHT2;
    for (i = 0; i < DIVIDE; i++) {
        if ( (i * weight) % 10 == result) {
            find_number = i;
            break;
        }
    }
    cout << find_number;

    return 0;
}