#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    //设置并输出数组

    for(int i = 0; i <= 9-1; i++)
    {
        for(int j = 0; j <= i - j - 1; j++)
        {
            int temp = 0;
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = arr[j+1];
            }
        }
    }
    //冒泡排序

    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    //输出结果

    return 0;
}