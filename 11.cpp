#include <iostream>
using namespace std;
int main ()
{
//1.记录起始下标位置
//2.记录结束下标位置
//3.起始下标与结束下标的元素互换
//4.起始位置++ 结束位置--
//5.循环执行2.1操作，直到起始位置>=结束位置

int arr[] = {1, 2, 3, 4, 5};
int start = 0;//起始下标
int end = sizeof(arr) / sizeof(arr[0])-1;//结束下标

//实现元素互换

while(start < end)
{
int temp = arr[start];
arr[start] = arr[end];
arr[end]=temp;
start++;
end--;
}
for(int i = 0; i <= 4; i++)
{
    cout << arr[i] << endl;
}

return 0;
}