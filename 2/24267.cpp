#include <iostream>

using namespace std;
long int T(long int n) {
    long int i, result = 0;
    for (i = 1; i <= n; i++)
        result += i;
    return result;
}

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long int n, count = 0, t, i;
    cin >> n;
    if (n < 1 || n > 500000)
        exit(1);
    
    t = T(n-2); // T()함수를 계속 호출하게 되면 시간 초과가 된다.
    for (i = n-2; i > 0; i--) {
        count += t;
        t -= i;
    }
    cout << count << "\n";
    cout << 3;

    return 0;
}

    // int i, j, k, abc, N = 7;
    // for (i = 1; i <= N-2; i++) {
    //     for (j = i+1; j <= N; j++) {
    //         for (k = j+1; k <= N; k++)
    //             cout << ++abc;
    //         cout << "\n";
    //     }
    //     cout << "----- -----\n";
    // }