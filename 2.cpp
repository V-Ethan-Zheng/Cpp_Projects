#include <iostream>
using namespace std;

int main()
{
    srand((time(NULL)));
    int num = rand() % 101;
    int input = 0;
    while(input != num)
    {
        cin >> input ;
    if (input < num)
        {cout << "It's bigger" << endl;}
    else if (input > num) 
        {cout << "It's smaller" << endl;}
    else 
        {cout << "correct" << endl;}
    }
    return 0;
}