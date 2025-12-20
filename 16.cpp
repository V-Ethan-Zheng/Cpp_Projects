#include <iostream>
using namespace std;
int sumx(int n)
{
    int s = 0;
    for (int i = 0; i < n + 1; i++)
    {
        s = s + i * i;
    }
    return s;
}

int main()
{
    int n = 0;
    cin >> n;
    int result = sumx(n);
    cout << result << endl;
    return 0;
}