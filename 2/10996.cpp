#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j, end_point1, end_point2;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);
    
    if (n % 2 == 0)
        end_point1 = n / 2;
    else
        end_point1 = n / 2 + 1;

    end_point2 = end_point1;
    if (n % 2 == 1)
        end_point2 -= 1;

    // cout << end_point1 << " " << end_point2 << "\n";
    for (i = 0; i < 2*n; i++) {
        if ((i+1) % 2 == 1) { // 홀수
            for (j = 0; j < end_point1; j++) {
                cout << "*";
                if (j != end_point1-1)
                    cout << " ";
            }
        }
        else { // 짝수
            cout << " ";
            for (j = 0; j < end_point2; j++) {
                cout << "*";

                if (j != end_point2-1)
                    cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}