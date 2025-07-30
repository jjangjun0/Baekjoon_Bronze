#include <iostream>

using namespace std;
#define N 3
#define SEC 60;

int main(void)
{
    int start[N+1], end[N+1];
    int i, h, m, s;

    for (i = 0; i < N; i++) {
        cin >> start[0] >> start[1] >> start[2] >> end[0] >> end[1] >> end[2];
        if (start[0] < 7 || start[0] > 22)
            exit(1);
        if (start[1] < 0 || start[1] > 59)
            exit(1);
        if (start[2] < 0 || start[2] > 59)
            exit(1);

        if (end[0] < start[0] || end[0] > 22)
            exit(1);
        if (end[0] == start[0] &&
                (end[1] * 60 + end[2]) < (start[1] * 60 + start[2]))
            exit(1);
        if (end[1] < 0 || end[1] > 59)
            exit(1);
        if (end[2] < 0 || end[2] > 59)
            exit(1);

        s = end[2] - start[2];
        if (s < 0) {
            end[1] -= 1;
            s += SEC;
        }
        m = end[1] - start[1];
        if (m < 0) {
            end[0] -= 1;
            m += SEC;
        }
        h = end[0] -= start[0];

        cout << h << " " << m << " " << s << "\n";
    }

    return 0;
}