#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int A, B;
	cin >> A >> B;
	
	while (!((A > 0 && A < 10) && (B > 0 && B < 10))) {
		cin >> A >> B;
	}

	cout << std::fixed << std::setprecision(15) << (double)A / B << endl;
}