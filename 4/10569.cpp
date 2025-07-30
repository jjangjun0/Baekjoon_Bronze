#include <iostream>

using namespace std;

int main(void)
{
    int t, vertex, edge, i;
    cin >> t;
    if (t < 1 || t > 100)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> vertex >> edge;
        if (vertex < 4 || vertex > 100)
            exit(1);
        if (edge < 4 || edge > 100)
            exit(1);

        cout << 2 - vertex + edge << "\n"; // 꼭짓점 - 모서리 + 면 = 2
    }

    return 0;
}