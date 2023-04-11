# include <iostream>


using namespace std;

int main()
{

// 数组的定义方式

    int a[] = {1,2,3};
    int b[2][3] = {{1,2,3},{4,5,6}};
    int c[2][3] = {1,2,3,4,5,6};
    int d[][3] = {1,2,3,4,5,6};

/*
知识点：数组名为指针，如果直接进行输出，会输出数组元素的首地址
例子：
    cout << "数组a的值为: " << a << endl;
    cout << "数组b的值为: " << b << endl;
    cout << "数组c的值为: " << c << endl;
    cout << "数组d的值为: " << d << endl;
输出结果为：
    数组a的值为: 0x16f5f31a8
    数组b的值为: 0x16f5f3190
    数组c的值为: 0x16f5f3170
    数组d的值为: 0x16f5f3150
*/

// 对数组进行输出方式：
cout << "数组a的值为: " << endl;
for(int j=0; j<3; j++)
{
    cout << a[j] << " ";
}
cout << endl;

cout << "数组b的值为: " << endl;
for(int i=0; i<2; i++)
{
    for(int j=0; j<3; j++)
    {
        cout << b[i][j] << " ";
    }
    cout << endl;
}

cout << "数组c的值为: " << endl;
for(int i=0; i<2; i++)
{
    for(int j=0; j<3; j++)
    {
        cout << c[i][j] << " ";
    }
    cout << endl;
}

cout << "数组d的值为: " << endl;
for(int i=0; i<2; i++)
{
    for(int j=0; j<3; j++)
    {
        cout << d[i][j] << " ";
    }
    cout << endl;
}


    system("pause");
    return 0;
}

/*
输出的值为：
        数组a的值为: 
        1 2 3 
        数组b的值为: 
        1 2 3 
        4 5 6 
        数组c的值为: 
        1 2 3 
        4 5 6 
        数组d的值为: 
        1 2 3 
        4 5 6 
*/