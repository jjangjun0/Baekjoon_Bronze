#include <iostream>

using namespace std;

#define N 9

int main(void)
{
    int max_idx, i;
    int numbers[N + 1];

    for (i = 0; i < N; i++)
        cin >> numbers[i];
    
    for (i = 0, max_idx = 0; i < N; i++) {
        if (numbers[max_idx] < numbers[i])
            max_idx = i;
    }
    cout << numbers[max_idx] << "\n";
    cout << max_idx + 1;

    return 0;
}