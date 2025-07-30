#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 15

int appointed(char ch) {
    int number;
    if (ch >= 'A' && ch <= 'C')         number = 2;
    else if (ch >= 'D' && ch <= 'F')    number = 3;
    else if (ch >= 'G' && ch <= 'I')    number = 4;
    else if (ch >= 'J' && ch <= 'L')    number = 5;
    else if (ch >= 'M' && ch <= 'O')    number = 6;
    else if (ch >= 'P' && ch <= 'S')    number = 7;
    else if (ch >= 'T' && ch <= 'V')    number = 8;
    else if (ch >= 'W' && ch <= 'Z')    number = 9;
    return number;
}

int main(void)
{
    char str[SIZE+1];
    int times = 0, i;
    
    cin >> str;
    for (i = 0; i < strlen(str); i++) {
        times += 2 + (appointed(str[i]) - 1);
    }
    cout << times;

    return 0;
}