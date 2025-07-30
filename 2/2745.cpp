#include <iostream>
#include <cstring>
#include <cmath>

#define SIZE 1024

using namespace std;

int main(void)
{
    char str[SIZE];
    int N, length, num, square, i;
    long int sum = 0;

    cin >> str >> N;
    if (N < 2 || N > 36)
        exit(1);

    length = strlen(str);
    square = length - 1;
    for (i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            num = str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            num = str[i] - 'A' + 10;

        //cout << "square: " << square << "\n";
        sum += num * pow(N, square--);
    }
    cout << sum;

    return 0;
}