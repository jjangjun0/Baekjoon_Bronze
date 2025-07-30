#include <iostream>

using namespace std;

int main(void)
{
    int mon, day;
    cin >> mon;
    cin >> day;

    if (mon < 1 || mon > 12)
        exit(1);
    if (day < 1 || day > 31)
        exit(1);

    if (mon < 2)
        cout << "Before";
    else if (mon > 2)
        cout << "After";
    else {
        if (day < 18)
            cout << "Before";
        else if (day > 18)
            cout << "After";
        else
            cout << "Special";
    }

    return 0;
}