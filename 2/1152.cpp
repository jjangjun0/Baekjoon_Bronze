#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 1000000

int main(void)
{
    char str[SIZE+1];

    //cin >> str;
    cin.getline(str, SIZE+1);

    long int i, num;
    int flag = 0;
    num = 0;
    for (i = 0; i < strlen(str); i++) {
        if (!flag && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {    
            num++;
            flag = 1;
        }
        if (str[i] == ' ')
            flag = 0;
    }
    cout << num;

    return 0;
}