#include <iostream>
using namespace std;
int main()
{
    
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i <= 9; i++)
    {
        int * ptr = nullptr;
        if(ptr == nullptr)  //不知是否需要
        {
            ptr = &arr1[i];
            cout << *ptr << endl;
        }
        else   //不知是否需要
        {
            cout << "ptr set failed" << endl;
        }
    }
    return 0;
}