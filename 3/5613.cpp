#include <iostream>
#include <cstring>

using namespace std;
#define N 8

int main(void)
{
    long int result = 0;
    char str[N+1];
    int is_first, is_num, SYMBOL;

    is_first = 1;
    is_num = 0;
    SYMBOL = 0;
    while (1) {
        cin >> str;
        if (is_first && !(str[0] >= '0' && str[0] <= '9'))
            exit(1);    // "+" 처음에는 숫자가 오지 않는 경우 에러
        if (is_first) {
            result = atol(str);
            is_first = 0; // 처음이 아닌 경우 is_first 비활성화
        }

        if (!strcmp(str, "=")) {
            if (SYMBOL)
                exit(4); // "1 + =" 다음과 같은 경우 에러
            break;      // loop 종료
        }
        
        if (!is_num && SYMBOL && !(str[0] >= '0' && str[0] <= '9'))
            exit(2);    // "1 + +" 문자가 연속적으로 오는 경우 에러 
        if (is_num && str[0] >= '0' && str[0] <= '9')
            exit(3);    // "1 1" 숫자가 연속적으로 오는 경우 에러
        
        if (str[0] >= '0' && str[0] <= '9')
            is_num = 1; // 숫자가 왔다면
        else
            is_num = 0; // 숫자가 아니면

        if (!strcmp(str, "+"))      SYMBOL = 1;
        else if (!strcmp(str, "-")) SYMBOL = 2;
        else if (!strcmp(str, "*")) SYMBOL = 3;
        else if (!strcmp(str, "/")) SYMBOL = 4;

        // 기호가 있고, 숫자가 왔다면
        if (is_num && SYMBOL) {
            switch (SYMBOL) {
                case 1: result += atol(str); SYMBOL = 0; break;
                case 2: result -= atol(str); SYMBOL = 0; break;
                case 3: result *= atol(str); SYMBOL = 0; break;
                case 4: result /= atol(str); SYMBOL = 0; break;
                default: break;
            }
        }
        //cout << "  " << result << "\n";
    };
    cout << result;

    return 0;
}