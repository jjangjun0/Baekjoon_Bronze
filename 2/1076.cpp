#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
#define SIZE 16

int value(char *str) {
    if (!strcmp(str, "black"))   return 0;
    if (!strcmp(str, "brown"))   return 1;
    if (!strcmp(str, "red"))     return 2;
    if (!strcmp(str, "orange"))  return 3;
    if (!strcmp(str, "yellow"))  return 4;
    if (!strcmp(str, "green"))   return 5;
    if (!strcmp(str, "blue"))    return 6;
    if (!strcmp(str, "violet"))  return 7;
    if (!strcmp(str, "grey"))    return 8;
    if (!strcmp(str, "white"))   return 9;
    return -1;
}

int main(void)
{
    char buffer[SIZE];
    long long resistance = 0;
    // 1. 저항값
    cin >> buffer;
    resistance += value(buffer) * 10;
    cin >> buffer;
    resistance += value(buffer);

    // 2. 곱해야 하는 값
    cin >> buffer;
    resistance *= pow(10, value(buffer));

    cout << resistance;

    return 0;
}