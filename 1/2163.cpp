#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    long int result = 0;
    cin >> N >> M;
    if (N < 1 || N > 300)
        exit(1);
    if (M < 1 || M > 300)
        exit(1);

    result += (N-1) + (long int)N * (M-1);
    cout << result; // 먼저 가로로 N-1번 쪼개고, N개의 조각을 다시 세로로 M-1번 쪼개면 1x1 초콜렛
    
    return 0;
}