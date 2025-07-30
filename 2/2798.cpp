#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long int m, best = 0, temp1, temp2, temp3, i, j, k;

    cin >> n >> m;
    if (n < 3 || n > 100)
        exit(1);
    if (m < 10 || m > 300000)
        exit(1);

    long int card[n+1];
    for (i = 0; i < n; i++) {
        cin >> card[i];
        if (card[i] < 1 || card[i] > 100000)
            exit(1);
    }

    for (i = 0; i < n; i++) {
        temp1 = card[i]; // 카드 1개 고름
        for (j = i + 1; j < n; j++) {
            temp2 = temp1 + card[j]; // 카드 2개 고름
            for (k = j + 1; k < n; k++) {
                temp3 = temp2 + card[k]; // 카드 3개 고름

                if (temp3 > best && temp3 <= m) {
                    // cout << temp3 << "\n";
                    best = temp3;
                }
            }
        }
    }
    cout << best;

    return 0;
}