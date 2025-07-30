#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    int n, i, sum = 0;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    char numbers[n + 1]; // NULL 문자 포함 (+1)
    cin >> numbers;

    for (i = 0; i < strlen(numbers); i++) {
        sum += (numbers[i] - '0');
    }
    cout << sum;

    return 0;
}