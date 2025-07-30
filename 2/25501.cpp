#include <iostream>
#include <cstring>

#define SIZE 1000

using namespace std;
static int call;

int recursion(const char *s, int l, int r) {
    call++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s) {
    return recursion(s, 0, strlen(s)-1);
}

int main(void)
{
    int t, i;
    char str[SIZE + 1];
    cin >> t;
    if (t < 1 || t > 1000)
        exit(1);

    for (int i = 0; i < t; i++) {
        call = 0; // 재귀 호출 횟수 초기화
        
        cin >> str;     // "ABCA", "ABBA"
        cout << isPalindrome(str) << " " << call << "\n";
    }
    return 0;
}