#include <cstddef>
#include <iostream>
using namespace std;
int main()
{
    int scores[3][3]= 
    {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };
    //定义二维数组

    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            cout << scores[i][j] << "  ";
        }
        cout << endl;
    }
    //输出二维数组

    //输出方式1：分别输出两个数组结合
    int sum[] = {};
    for(size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            sum[i] += scores[i][j];
        }    
    }
    //构建sum数组
    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            cout << scores[i][j] << "  ";
        }
        cout << sum[i] << "  ";
        cout << endl;
    }
    //输出

return 0;
}