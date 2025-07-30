#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a) {
    long long sum = 0;
    int i;
    for (i = 0; i < a.size(); i++)
        sum += a[i];

    return sum;
}

int main(void)
{
    std::vector<int> num;

    num.push_back(10);
    num.push_back(20);
    num.push_back(33);

    cout << sum(num);

    return 0;
}