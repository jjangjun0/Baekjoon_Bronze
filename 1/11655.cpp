#include <iostream>
#include <cstring>
#include <cmath>

#define SIZE 100
#define PASSWORD 13
using namespace std;

int main(void)
{
    char str[SIZE+1];
    int str_length, i;

    cin.getline(str, SIZE+1);
    str_length = strlen(str);
    char new_str[str_length+1];

    for (i = 0; i < str_length; i++) {
        if (str[i] == ' ')
            new_str[i] = str[i];
        else if (str[i] >= '0' && str[i] <= '9')
            new_str[i] = str[i];
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            if ('Z' < str[i] + PASSWORD) {
                new_str[i] = (str[i] + PASSWORD) - 'Z' - 1 + 'A'; // 1 초과하면 0부터 'A'다.
            }
            else
                new_str[i] = str[i] + PASSWORD;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if ('z' < str[i] + PASSWORD) {
                new_str[i] = (str[i] + PASSWORD) - 'z' - 1 + 'a';
            }
            else
                new_str[i] = str[i] + PASSWORD;
        }
    }
    new_str[str_length] = '\0';
    cout << new_str;

    return 0;
}