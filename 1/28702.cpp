#include <iostream>
#include <cstring>

using namespace std;
#define N 3
#define SIZE 8

int main(void)
{
    char str[N][SIZE+1];
    long int find_n, standard_n;
    int i, is_number;

    for (i = 0; i < N; i++)
        cin >> str[i];

    for (i = 0; i < N; i++) {
        if (str[i][0] >= '0' && str[i][0] <= '9') {
            is_number = i;
            break;
        }
    }

    standard_n = atol(str[is_number]);
    find_n = standard_n + (N-1 - is_number); // 입력된 연속하는 마지막 수
    find_n++; // 우리가 찾는 수

    if (find_n % 3 == 0)
        cout << "Fizz";
    if (find_n % 5 == 0)
        cout << "Buzz";
    if (find_n % 3 != 0 && find_n % 5 != 0)
        cout << find_n;

    return 0;
}