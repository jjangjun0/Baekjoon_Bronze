#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int t, i;
    char str[4];

    cin >> t;
    if (t < 1)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> str;

        if (strlen(str) != 3 || str[1] != ',')
            exit(1);

        cout << (int)(str[0]-'0') + (str[2]-'0') << "\n";
    }

    return 0;
}