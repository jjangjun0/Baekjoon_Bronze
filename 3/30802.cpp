#include <iostream>
#include <cmath>

using namespace std;
#define N 6

int main(void)
{
    long int t[N+1];
    long int n, T, P, t_order = 0;
    int i;

    cin >> n;
    if (n < 1 || n > 1000000000)
        exit(1);
    
    for (i = 0; i < N; i++) {
        cin >> t[i];
        if (t[i] < 0 || t[i] > 1000000000)
            exit(1);
    }
    if (n != (t[0] + t[1] + t[2] + t[3] + t[4] + t[5]))
        exit(2);

    cin >> T >> P;
    if (T < 2 || T > 1000000000)
        exit(1);
    if (P < 2 || P > 1000000000)
        exit(1);

    for (i = 0; i < N; i++) {
        t_order += ceil(t[i] / (long double)T);
    }

    cout << t_order << "\n";
    cout << n / P << " " << n % P;

    return 0;
}