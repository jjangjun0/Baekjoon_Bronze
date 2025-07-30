// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

// 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다.
// 둘째 줄에는 정수가 공백으로 구분되어져있다.
// 셋째 줄에는 찾으려고 하는 정수 v가 주어진다.
// 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

#include <iostream>

using namespace std;

int main(void)
{
    int n, v, i, count = 0;
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);

    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < -100 || arr[i] > 100)
            exit(1);
    }
    cin >> v;
    if (v < -100 || v > 100)
        exit(1);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == v)
            count++;
    }
    cout << count;

    return 0;
}