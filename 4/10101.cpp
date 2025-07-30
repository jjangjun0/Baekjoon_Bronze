#include <iostream>

using namespace std;

int main(void)
{
    int e1, e2, e3, sum;
    cin >> e1;
    cin >> e2;
    cin >> e3;

    if (e1 < 0 || e1 > 180)
        exit(1);
    if (e2 < 0 || e2 > 180)
        exit(1);
    if (e3 < 0 || e3 > 180)
        exit(1);

    sum = e1 + e2 + e3;
    if (sum != 180)
        cout << "Error";
    else {
        if (e1 == 60 && e2 == 60 && e3 == 60)
            cout << "Equilateral";
        else {
            if (e1 == e2 || e2 == e3 || e3 == e1)
                cout << "Isosceles";
        }
        if (e1 != e2 && e2 != e3 && e3 != e1)
            cout << "Scalene";
    }

    return 0;
}