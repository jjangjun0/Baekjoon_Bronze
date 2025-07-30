#include <iostream>
#include <cstring>

using namespace std;
#define SIZE 80

int main(void)
{
    int t, score, repeat, i, j;
    char str[SIZE+1];

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> str;

        score = repeat = 0;
        for (j = 0; j < strlen(str); j++) {
            if (str[j] == 'O')
                score += (1 + repeat++);
            else if (str[j] == 'X')
                repeat = 0;
        }
        cout << score << "\n";
    }

    return 0;
}