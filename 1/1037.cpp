#include <iostream>

using namespace std;

int main(void)
{
    int N, i, j, is_multiple, is_same, is_member;
    long long int x, least_multiple = 1;
    cin >> N;
    if (N < 1 || N > 50)
        exit(1);
    
    long int num[N];
    for (i = 0; i < N; i++) {
        cin >> num[i];
        if (num[i] < 2 || num[i] > 1000000)
            exit(1);
    }

    x = 2;
    while (1) {
        is_multiple = 1;
        for (i = 0; i < N; i++) {
            if (x % num[i] != 0) {
                is_multiple = 0;
                break;
            }
        }
        if (is_multiple)
            break;
        x++;
    }

    is_same = 0;
    for (i = 0; i < N; i++) {
        if (x == num[i]) {
            is_same = 1;
            break;
        }
    }

    if (is_same) {
        least_multiple = 2;
        while (1) {
            is_member = 1;
            for (i = 0; i < N; i++) {
                if (num[i] % least_multiple != 0) {
                    is_member = 0;
                    break;
                }
            }
            if (is_member)
                break;
            least_multiple++;
        }
        x *= least_multiple;
    }
    // cout << least_multiple << " " << x / least_multiple << "\n";
    cout << x;

    return 0;
}