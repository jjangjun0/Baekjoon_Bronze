// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

// 첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
// 둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    int n, x, i;

    cin >> n >> x;
    if (n < 1 || n > 10000 || x < 1 || x > 10000)
        exit(1);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 1 || arr[i] > 10000)
            exit(1);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < x)
            cout << arr[i] << " ";
    }
    return 0;
}