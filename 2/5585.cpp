#include <iostream>

#define MONEY 1000
#define N 6

using namespace std;

int main(void)
{
    int pay, i, count = 0;
    int change[N] = { 500, 100, 50, 10, 5, 1 };
    cin >> pay;
    if (pay < 1 || pay >= 1000)
        exit(1);
    
    pay = MONEY - pay;
    i = 0;
    while (1) {
        if (pay == 0)
            break;
        pay -= change[i];
        count++;
        // cout << "  " << count << " " << pay << "\n";
        
        if (pay < 0) {
            pay += change[i]; // 음수가 되면 복구
            count--;
            i++;
        }
    }
    cout << count;

    return 0;
}