#include <iostream>

using namespace std;

int main(void)
{
    int N, M, i, j, move1, move2, temp;
    cin >> N >> M;
    if (N < 1 || N > 100)
        exit(1);
    if (M < 1 || M > 100)
        exit(1);

    int baguni[N];
    for (i = 0; i < N; i++)
        baguni[i] = i+1;

    for (i = 0; i < M; i++) {
        cin >> move1 >> move2;
        if (move1 < 1 || move1 > move2)
            exit(1);
        if (move2 < 1 || move2 > N)
            exit(1);

        move1 -= 1;
        move2 -= 1;
        for (j = 0; j <= (move2-move1) / 2; j++) {
            temp = baguni[move1+j];
            baguni[move1+j] = baguni[move2-j];
            baguni[move2-j] = temp;
        }
        // int k;
        //cout << i+1 << "번 째: ";
        //for (k = 0; k < N; k++) cout << baguni[k] << " ";
        //cout << "\n";
    }

    for (i = 0; i < N; i++)
        cout << baguni[i] << " ";

    return 0;
}