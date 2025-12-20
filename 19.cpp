#include <iostream>
using namespace std;
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << "  " << b <<endl;
}
void swap2(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 114;
    int b = 514;
    //swap1(a, b);
    swap2(&a, &b);
    cout << a << " ? " << b << endl;
}