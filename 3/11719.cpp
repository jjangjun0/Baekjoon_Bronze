#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    char ch;
    while (cin.read(&ch, 1))
        cout << ch;

    return 0;
}