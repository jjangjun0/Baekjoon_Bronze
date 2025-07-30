#include <iostream>

using namespace std;
int main(void)
{
    char ch;
    int length = 0;
    while (cin.read(&ch, 1)) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            length++;
        else
            break;
    }
    cout << length;

    return 0;
}