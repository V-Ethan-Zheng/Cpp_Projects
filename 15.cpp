#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    if (b > 0) 
    {
        cout << a << "+" << b << "=" << a + b << endl
             << a << "*" << b << "=" << a * b << endl
             << a << "/" << b << "=" << a / b << endl
             << a << "%" << b << "=" << a % b << endl;
    }
    else 
    {
        cout << a << "+" << "(" << b <<")"<< "=" << a + b << endl
             << a << "*" << "(" << b <<")"<< "=" << a * b << endl
             << a << "/" << "(" << b <<")"<< "=" << a / b << endl
             << a << "%" << "(" << b <<")"<< "=" << a % b << endl;
    }
return 0;
}