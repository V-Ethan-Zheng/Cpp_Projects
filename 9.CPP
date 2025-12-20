#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << x + y + z << endl;
    cout << fixed << setprecision(2) << (static_cast<float>(x) + static_cast<float>(y) + static_cast<float>(z) )/3 << endl;
    return 0;
}