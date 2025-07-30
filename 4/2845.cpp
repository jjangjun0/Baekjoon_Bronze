#include <iostream>

using namespace std;
#define N 5

int main(void)
{
    int l, p, assume, i;
    cin >> l >> p;
    if (l < 1 || l > 10)
        exit(1);
    if (p < 1 || p > 1000)
        exit(1);
    assume = l * p;

    long int news[N+1];
    for (i = 0; i < N; i++)
        cin >> news[i];
    for (i = 0; i < N; i++)
        cout << news[i] - assume << " ";

    return 0;
}