#include <iostream>

using namespace std;

int main(void)
{
    int x1, y1, x2, y2, move1, move2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if (x1 < 0 || x1 > 1000)
        exit(1);
    if (y1 < 0 || y1 > 1000)
        exit(1);
    if (x2 < 0 || x2 > 1000)
        exit(1);
    if (y2 < 0 || y2 > 1000)
        exit(1);
    
    // Case 1: 바구니 1에 사과(x), 바구니 2에 오렌지(y)
    move1 = x2 + y1;
    // Case 2: 바구니 1에 오렌지(y), 바구니 2에 사과(x)
    move2 = x1 + y2;

    move1 >= move2 ? cout << move2 : cout << move1 ; 

    return 0;
}