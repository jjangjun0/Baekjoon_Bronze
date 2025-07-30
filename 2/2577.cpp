#include <iostream>
#include <string.h>

using namespace std;
#define N 10

int main(void)
{
    int a, b, c, i;
    long int result;
    int num[N+1] = { 0 };
    string str;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a < 100 || a > 1000)
        exit(1);
    if (b < 100 || b > 1000)
        exit(1);
    if (c < 100 || c > 1000)
        exit(1);

    result = (long int)a * b * c;
    str = to_string(result);
    for (i = 0; i < str.length(); i++) {
        if (str[i] == '0') num[0]++;
        else if (str[i] == '1') num[1]++;
        else if (str[i] == '2') num[2]++;
        else if (str[i] == '3') num[3]++;
        else if (str[i] == '4') num[4]++;
        else if (str[i] == '5') num[5]++;
        else if (str[i] == '6') num[6]++;
        else if (str[i] == '7') num[7]++;
        else if (str[i] == '8') num[8]++;
        else if (str[i] == '9') num[9]++;
    }

    for (i = 0; i < N; i++)
        cout << num[i] << "\n";

    return 0;
}