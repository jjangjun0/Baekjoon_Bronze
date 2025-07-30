#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 1000

int main(void)
{
    int t, i, j;
    cin >> t;
    if (t < 1 || t > 10)
        exit(1);

    char str[t][SIZE];

    for (i = 0; i < t; i++)
        cin >> str[i];
    
    // 대문자로만 이루어진 문자열인지 확인
    for (i = 0; i < t; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] < 'A' && str[i][j] > 'Z')
                exit(1);
        }
    }
    
    for (i = 0; i < t; i++) {
        cout << str[i][0] << str[i][strlen(str[i])-1] << "\n";
    }

    return 0;
}