#include <iostream>

using namespace std;

int main(void)
{
    int N, M, i, j, is_expense, count = 0;
    int fill_row, fill_column;
    cin >> N >> M;
    if (N < 1 || N > 50)
        exit(1);
    if (M < 1 || M > 50)
        exit(1);

    char str[N][M];
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> str[i][j];

    int is_row[N] = { 0 };
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (str[i][j] == 'X') {
                is_row[i] = 1;
                break;
            }
        }
    }
    int is_column[M] = { 0 };
    for (j = 0; j < M; j++) {
        for (i = 0; i < N; i++) {
            if (str[i][j] == 'X') {
                is_column[j] = 1;
                break;
            }
        }
    }

    fill_row = fill_column = 0;
    for (i = 0; i < N; i++) {
        // cout << is_row[i] << " ";
        if (!is_row[i])
            fill_row++;
    }
    // cout << "\n";
    for (j = 0; j < M; j++) {
        // cout << is_column[j] << " ";
        if (!is_column[j])
            fill_column++;
    }

    if (fill_row >= fill_column)
        cout << fill_row;
    else
        cout << fill_column;
    
    return 0;
}