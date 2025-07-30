#include <iostream>

using namespace std;

int main(void)
{
    int n, sum, num, count, i, j;

    while (1) {
        cin >> n;
        if (n == -1)
            break;
        if (n <= 2 || n >= 100000)
            exit(1);
        
        sum = num = 0;
        for (i = 1; i < n; i++) {       // i<=n이 아닌 i<n인 이유: 자신을 제외한 약수들의 합이 자기 자신
            if (n % i == 0) {
                // cout << "  약수: " << i << "\n";
                sum += i;   // 약수들의 합
                num++;      // 약수의 개수
            }
        }
        // 완전수가 아니라면
        if (sum != n) {
            cout << n << " is NOT perfect." << "\n";
            continue;
        }
        // 완전수라면
        cout << n << " = ";
        sum = count = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                if (count != num-1)
                    cout << i << " + ";
                else
                    cout << i;
                count++;
            }
        }
        cout << "\n";
    }

    return 0;
}