#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, middle;

    cin >> a >> b >> c;
    if (a < 1 || a > 100)
        exit(1);
    if (b < 1 || b > 100)
        exit(1);
    if (c < 1 || c > 100)
        exit(1);

    if (a >= b) {
        if (b >= c)
            cout << b;      // a b c
        else {
            if (a >= c)
                cout << c;  // a c b
            else
                cout << a;  // c a b
        }
    }
    else {
        if (c >= b)
            cout << b;      // c b a
        else {
            if (a >= c)
                cout << a;  // b a c
            else
                cout << c;  // b c a
        }
    }
    
    return 0;
}