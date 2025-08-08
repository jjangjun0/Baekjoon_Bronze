#include <iostream>
#include <cstring>

using namespace std;
#define N 26
#define SIZE 100

int main(void)
{
    int alpha[N] = { 0 };
    char *p;
    char str[SIZE + 1];
    int length, i;

    cin >> str;
    length = strlen(str);

    p = str;
    for (i = 0; i < length; i++)
        alpha[*(p++) - 'a']++;

    for (i = 0; i < N; i++)
        cout << alpha[i] << ' ';
    
    return 0;
}