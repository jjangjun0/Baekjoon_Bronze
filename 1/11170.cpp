#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int T, i, k;
    long int N, M, j, length, count;
    string str;

    cin >> T;
    if (T < 1 || T > 20)
        exit(1);
    
    for (i = 0; i < T; i++) {
        cin >> N >> M;
        if (N < 0 || N > M)
            exit(1);
        if (M < N || M > 1000000)
            exit(1);

        count = 0;
        for (j = N; j <= M; j++) {
            str = to_string(j);
            length = str.length();
            for (k = 0; k < length; k++) {
                if (str[k] == '0')
                    count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}