#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    while (cin.read(&ch, 1)) // fgets가 더 빠름
        cout << ch;
    return 0;
}