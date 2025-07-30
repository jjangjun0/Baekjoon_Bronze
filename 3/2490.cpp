#include <iostream>

using namespace std;

int main(void)
{
    int temp, yes, no;
    for (int i = 0; i < 3; i++) {
        yes = no = 0;
        for (int j = 0; j < 4; j++) {
            cin >> temp;
            if (temp != 0 && temp != 1)
                exit(1);

            if (temp == 0) // 배(0)
                yes++;
            if (temp == 1) // 등(1)
                no++;
        }
        switch (yes) {
            case 1: cout << "A"; break;
            case 2: cout << "B"; break;
            case 3: cout << "C"; break;
            case 4: cout << "D"; break;
        }
        if (no == 4)
            cout << "E";
        cout << "\n";
    }

    return 0;
}