#include <iostream>

using namespace std;

long int calculation(long int a, long int b) {
    return (a + b) * (a - b);
}

int main(void)
{
    long int a, b;
    cin >> a >> b;

    if (a < 1 || a > 100000 || b < 1 || b > 100000)
        exit(1);
    cout << calculation(a, b);

    return 0;
}