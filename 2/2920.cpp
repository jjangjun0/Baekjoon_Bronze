#include <iostream>
#include <cstring>

using namespace std;
#define N 8

int main(void)
{
    char sound[N+1];
    int i;

    for (i = 0; i < N; i++) {
        cin >> sound[i];
        if (!(sound[i] >= '1' && sound[i] <= '8'))
            exit(1);
    }

    if (!strcmp(sound, "12345678"))
        cout << "ascending";
    else if (!strcmp(sound, "87654321"))
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}