#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j, temp, min_idx;
    cin >> n;
    if (n < 1 || n > 1000)
        exit(1);

    int num[n];
    for (i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] < -1000 || num[i] > 1000)
            exit(1);
    }

    for (i = 0; i < n; i++) {
        min_idx = i;
        for (j = i; j < n; j++) {
            if (num[min_idx] > num[j])
                min_idx = j;
        }
        temp = num[i];
        num[i] = num[min_idx];
        num[min_idx] = temp;
    }
    
    for (i = 0; i < n; i++)
        cout << num[i] << "\n";

    return 0;
}