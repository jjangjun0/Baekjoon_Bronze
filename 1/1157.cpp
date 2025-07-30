#include <iostream>
#include <cstring>

#define SIZE 1000000
#define N 26
using namespace std;

int main(void)
{
    int count[N] = { 0 };
    char str[SIZE+1];
    int is_one, max_idx, i, j;
    long int length, max;

    cin >> str;
    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i]-'a']++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            count[str[i]-'A']++;
    }

    max = count[0];
    for (i = 0; i < N; i++) {
        if (max < count[i])
            max = count[i];
    }

    is_one = 0;
    max_idx = 0;
    for (i = 0; i < N; i++) {
        if (count[i] == max) {
            max_idx = i;
            is_one++;
        }
    }
    if (is_one > 1)
        cout << "?";
    else if (is_one == 1)
        cout << (char)(65 + max_idx);

    return 0;
}