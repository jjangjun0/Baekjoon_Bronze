#include <iostream>
#include <iomanip>

using namespace std;
#define SIZE 13
static double G[SIZE] = { 0, 0.7, 1, 1.3, 1.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3 };

int main(void)
{
    int t, n, i, j, k, is_in_g;
    int credit, total;
    double grade, GPA;
    cin >> t; // t학기
    if (t < 1 || t > 100)
        exit(1);

    for (i = 0; i < t; i++) {
        cin >> n; // n개의 과목 수
        if (n < 1 || n > 10)
            exit(1);

        total = GPA = 0;
        for (j = 0; j < n; j++) {
            cin >> credit >> grade;
            if (credit < 1 || credit > 6)
                exit(1);
            is_in_g = 0;
            for (k = 0; k < SIZE; k++) {
                if (grade == G[k]) {
                    is_in_g = 1;
                    break;
                }
            }
            if (!is_in_g)
                exit(1);
            
            total += credit;
            GPA += (grade * credit);
        }
        
        GPA /= total;
        cout << total << " " << fixed << setprecision(1) << GPA << "\n"; // 학기마다 출력
    }
    
    return 0;
}