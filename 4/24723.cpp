#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if (n < 1 || n > 5)
        exit(1);

    cout << pow(2, n);

    return 0;
}