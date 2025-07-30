#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int N, i, j, str_last, count = 0, people;
    cin >> N;
    if (N < 1 || N > 50)
        exit(1);
    
    char seat[N+1];
    char str[N*2+1];
    cin >> seat;
    people = strlen(seat);

    str_last = -1;
    for (i = 0; i < N; i++) {
        if (str_last == -1) {
            str[0] = '*';
            str_last++;
        }
        
        if (seat[i] == 'S') {
            if (str[str_last] == '*') {
                str[++str_last] = 'S';
                str[++str_last] = '*';
            }
        }
        else if (seat[i] == 'L' && seat[i+1] == 'L') {
            if (str[str_last] == '*') {
                str[++str_last] = 'L';
                str[++str_last] = 'L';
                str[++str_last] = '*';
                i++;    // 커플은 LL 쌍으로 나온다.
            }
        }
        else
            exit(1);    // 'S' or 'LL' 정해진 입력이 아닌 경우 에러
    }
    str[++str_last] = '\0';
    // cout << str << "\n";

    for (i = 0; i < str_last; i++) {
        if (str[i] == '*')
            count++;
    }
    // 컵을 컵홀더에 놓을 수 있는 최대 사람의 수를 출력한다.
    if (people <= count)
        cout << people;
    else
        cout << count;

    return 0;
}