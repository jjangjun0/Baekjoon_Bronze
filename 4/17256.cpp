#include <iostream>

using namespace std;

int main(void)
{
    int Ax, Ay, Az, Cx, Cy, Cz;
    cin >> Ax >> Ay >> Az;
    cin >> Cx >> Cy >> Cz;

    if (Ax < 1 || Ax > 100)
        exit(1);
    if (Ay < 1 || Ay > 100)
        exit(1);
    if (Az < 1 || Az > 100)
        exit(1);
    if (Cx < 1 || Cx > 100)
        exit(1);
    if (Cy < 1 || Cy > 100)
        exit(1);
    if (Cz < 1 || Cz > 100)
        exit(1);

    cout << Cx - Az << " " << Cy / Ay << " " << Cz - Ax;

    return 0;
}