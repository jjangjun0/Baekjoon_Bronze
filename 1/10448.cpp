#include <iostream>

#define N 3
using namespace std;

int main(void)
{
    int T, K, t, i, j, k, max_idx, is_three;
    cin >> T;

    for (t = 0; t < T; t++) {
        cin >> K;
        if (K < 3 || K > 1000)
            exit(1);
        for (i = 1; i * (i + 1) / 2 <= K; i++)
            max_idx = i;
        // cout << "  최대: " << max_idx << "\n";
        int tn[max_idx+1];
        tn[0] = 0;
        for (i = 1; i <= max_idx; i++)
            tn[i] = i * (i + 1) / 2;        // Tn = 1 + 2 + ... + n = n(n+1) / 2
        
        // 세 가지의 삼각수의 합으로 표현이 되는가.
        is_three = 0;
        for (i = 1; i <= max_idx; i++) {
            for (j = 1; j <= max_idx; j++) {
                for (k = 1; k <= max_idx; k++) {
                    if (K == tn[i] + tn[j] + tn[k]) {
                        is_three = 1;
                        break;
                    }
                }
            }
        }
        if (is_three)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;    
}