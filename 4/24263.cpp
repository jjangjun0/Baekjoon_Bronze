#include <iostream>

using namespace std;

int main(void)
{
    long int n;
    cin >> n;
    if (n < 1 || n > 500000)
        exit(1);
    cout << n << "\n" << 1;

    return 0;
}