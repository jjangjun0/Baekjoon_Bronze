#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n, length, is_palindrom, i;
    string str;

    while (1) {
        cin >> n;
        if (n == 0)
            break;
        if (n < 1 || n > 99999)
            exit(1);
        
        str = to_string(n);
        length = str.length();
        is_palindrom = 1;
        for (i = 0; i < length / 2; i++) {
            if (str[i] != str[length-1 - i])
                is_palindrom = 0;
        }

        if (is_palindrom)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}