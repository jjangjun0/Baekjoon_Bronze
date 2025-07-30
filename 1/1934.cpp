#include <iostream>

using namespace std;

int main(void)
{
    int T, i, j;
    unsigned int A, B, min, greatest_divisor;
    cin >> T;
    if (T < 1 || T > 1000)
        exit(1);

    for (i = 0; i < T; i++) {
        cin >> A >> B;

        if (A < 1 || A > 45000)
            exit(1);
        if (B < 1 || B > 45000)
            exit(1);
        
        greatest_divisor = 1;
        if (A >= B) {
            for (j = 2; j <= B; j++) {
                while (A % j == 0 && B % j == 0) {
                    greatest_divisor *= j;
                    A /= j;
                    B /= j;
                    // cout << "(A, B): " << A << " " << B << "... divisor: " << greatest_divisor << "\n"; 
                }
            }
        }
        else {
            for (j = 2; j <= A; j++) {
                while (A % j == 0 && B % j == 0) {
                    greatest_divisor *= j;
                    A /= j;
                    B /= j;
                    // cout << "(A, B): " << A << " " << B << "... divisor: " << greatest_divisor << "\n"; 
                }
            }
        }

        cout << A * B * greatest_divisor << "\n";
    }

    return 0;
}