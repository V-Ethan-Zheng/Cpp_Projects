#include <iostream>
using namespace std;
int main() 
{
    for(int i = 0; i < 101; i++)
    {
        if(i % 10 != 0)
        {
            continue;
        }
        else 
        {
            cout << i << endl;
        }
    }
    return 0;
}