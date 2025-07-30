#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 20

int main(void)
{
    int n, i, j;
    char str[SIZE+1];
    
    cin >> n;
    if (n < 1 || n > 100)
        exit(1);
    
    for (i = 0; i < n; i++) {
        cin >> str;
        
        for (j = 0; j < strlen(str); j++) {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                str[j] += 32;
            }
        }
        cout << str << "\n";
    }

    return 0;
}