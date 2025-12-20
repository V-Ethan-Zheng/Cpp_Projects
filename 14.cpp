#include <iomanip>
#include <iostream>
using namespace std;
float tswitch(int f)
{
    float c = 5 * ( static_cast<float>(f) - 32 ) / 9;
    return c;
}

int main()
{
    int f = 0;
    cin >> f;
    float c = tswitch(f);
    cout << fixed << setprecision(1) << c << endl;
    return 0;
}
