#include <iostream>

#define MAX 10000

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    long int N, i;
    int num[MAX] = { 0 };         // index값을 배열의 index에 있는 값만큼 반복하여 출력한다.
    int temp, j;
    cin >> N;
    if (N < 1 || N > 10000000)
        exit(1);

    for (i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 1 || temp > MAX)
            exit(1);

        num[temp-1]++;
    }
    
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < num[i]; j++)
            cout << i+1 << "\n";
    }
    
    return 0;
}