#include <iostream>
#include <cstring>

#define MAX 32     // 1,000,000,000 -> 111011100110101100101000000000 (30bit)
using namespace std;

int main(void)
{
    long int N, multiple;
    int B, max_idx, i, j;

    cin >> N >> B;
    if (N < 1 || N > 1000000000)
        exit(1);
    if (B < 2 || B > 36)
        exit(1);

    multiple = 1;
    for (i = 0; i < MAX; i++) {
        if (N < multiple)
            break;
        multiple *= B;
    }
    max_idx = i;

    // cout << N << " " << multiple << "-> " << max_idx << "\n";
    int str[max_idx];

    for (i = 0; i < max_idx; i++) {
        multiple /= B;
        j = B;
        while (1) {
            if (N == --j * multiple)
                break;
            else if (N > j * multiple)
                break;
        }
        N -= j * multiple;
        str[i] = j;
    }

    for (i = 0; i < max_idx; i++) {
        if (str[i] >= 0 && str[i] <= 9)
            cout << str[i];
        else if (str[i] >= 10 && str[i] <= 35)
            cout << (char)( str[i] - 10 + 65 );
    }
    
    return 0;
}