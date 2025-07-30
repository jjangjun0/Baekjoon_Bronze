// 빠른 A + B 출력 //

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    int T;
    cin >> T;

    while(T--)
    {
        int A,B;
        cin >> A >> B;
        
        int result = A+B;
        cout << result << "\n";
    }
    
    return 0;
}