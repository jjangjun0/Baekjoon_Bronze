#include <iostream>
#include <cstdio>

using namespace std;

#define SIZE 100

int main(void)
{
    char buffer[SIZE + 1];

    while (fgets((char *)&buffer, sizeof(buffer), stdin) != NULL) { // 이게 더 빠름
        cout << buffer;
    }

    return 0;
}