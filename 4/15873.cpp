#include <iostream>

using namespace std;

int main(void)
{
    int input, a, b;
    cin >> input;

    a = input / 10;
    b = input % 10;
    if (b == 0) {
        if ((a % 10) != 1)
            exit(1);
        else {
            a /= 10;
            b = 10;
        }
    }

    cout << a + b;

    return 0;
}