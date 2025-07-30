#include <iostream>

using namespace std;

int main(void)
{
    int x1, x2;

    while (1) {
        cin >> x1 >> x2;
        if (x1 == 0 && x2 == 0)
            break;

        if (x1 < 0 || x1 > 10000)
            exit(1);
        if (x2 < 0 || x2 > 10000)
            exit(1);

        if (x2 % x1 == 0)
            cout << "factor" << "\n";
        else if (x1 % x2 == 0)
            cout << "multiple" << "\n";
        else
            cout << "neither" << "\n";
    }

    return 0;
}