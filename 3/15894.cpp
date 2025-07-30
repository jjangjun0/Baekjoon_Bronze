#include <iostream>

using namespace std;

int main(void)
{
    long int n;
    cin >> n;
    if (n < 1 || n > 1000000000)
        exit(1);

    cout << n * 4;

    return 0;
}