#include <iostream>
#include <cstring>

using namespace std;
#define N 10
#define SIZE 100

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    char str[SIZE+1];
    int i, count = 0;
    cin >> str;

    for (i = 0; i < strlen(str); i++) {
        cout << str[i];
        count++;
        if (count == N) {
            cout << "\n";
            count = 0;
        }
    }

    return 0;
}