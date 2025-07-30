#include <iostream>

using namespace std;

int main(void)
{
    int n, yes, no, temp, i;
    cin >> n;
    if (n < 1 || n > 101 || n % 2 == 0)
        exit(1);

    yes = no = 0;
    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp != 0 && temp != 1)
            exit(1);

        if (temp == 1)
            yes++;
        if (temp == 0)
            no++;
    }
    yes > no ? cout << "Junhee is cute!" : cout << "Junhee is not cute!";
    
    return 0;
}