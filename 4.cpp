#include <iostream>
using namespace std;
int main()
{
     for(int num = 0; num < 101; num++)
 {
    if( num % 10 == 7 )
    {
        cout << "hit your balls! this is the order!" << endl;
    }
    else if ( num % 7 == 0) 
    {
        cout << "hit your balls! this is the order!" << endl;
    }
    else if ( num / 10 == 7)
    {
        cout << "hit your balls! this is the order!" << endl;
    }
    else 
    {
        cout << num << endl;
    }
 }

return 0;

}