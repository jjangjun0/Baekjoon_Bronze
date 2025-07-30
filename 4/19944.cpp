#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    if (n < 3 || n > 1000)
        exit(1);
    if (m < 1 || m > 1000)
        exit(1);
    
    if (m <= 2)
        cout <<"NEWBIE!";
    else {
        if (m <= n)
            cout << "OLDBIE!";
        else
            cout << "TLE!";
    }

    return 0;
}