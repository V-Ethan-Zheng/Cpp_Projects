#include <iostream>
#include <ctime>
#include <cstddef>


using namespace std;
int main() 
{
    srand((time(NULL)));

    int num = rand() % 100;
    cout << num << endl;
    switch (num % 10) 
    {
        case 1 :
        case 2 :
        cout << "oh you're too small" << endl;
        default :
        cout << "oh you're so big" << endl;
    
    }
    cout << endl;
    return 0;
}