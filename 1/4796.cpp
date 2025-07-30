#include <iostream>

using namespace std;

int main(void)
{
    int L, P, V, i, result, count;

    count = 1;
    while (1) {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break;
        if (L < 1 || L >= P)
            exit(1);
        if (P <= L || P >= V)
            exit(1);
        if (V <= P)
            exit(1);

        result = 0;
        result += L * (int)(V / P);
        if (L > V % P)
            result += V % P;
        else
            result += L;

        cout << "Case " << count << ": " << result << "\n";
        count++;
    }

    return 0;
}