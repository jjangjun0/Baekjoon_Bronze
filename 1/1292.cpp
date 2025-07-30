#include <iostream>

using namespace std;

int making_value(int NUM) {
    int i, count, add_n, result = 0;
    count = 0;
    add_n = 1;
    for (i = 0; i < NUM; i++) {
        result += add_n;
        count++;

        if (count == add_n) {
            // cout << "  " << add_n << " 더하는 것은 이제 그만! count 초기화!\n";
            count = 0;
            add_n++;
        }
    }
    return result;
}

int main(void)
{
    int A, B, result1, result2;
    cin >> A >> B;
    if (A < 1 || A > B)
        exit(1);
    if (B < A || B > 1000)
        exit(1);

    result1 = making_value(A-1);
    result2 = making_value(B);
    cout << result2 - result1; // A부터 B까지의 합은 1 ~ B까지의 합에서 1 ~ (A-1)까지의 합을 뺀 값이다.

    return 0;
}