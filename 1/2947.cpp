#include <iostream>

#define N 5
using namespace std;

int main(void)
{
    int namu[N];
    int i, j, k, temp;
    for (i = 0; i < N; i++) {
        cin >> namu[i];
        if (namu[i] < 1 || namu[i] > N)
            exit(1);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N-1; j++) {
            if (namu[j] > namu[j+1]) {
                temp = namu[j];
                namu[j] = namu[j+1];
                namu[j+1] = temp;
                for (k = 0; k < N; k++)
                    cout << namu[k] << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}