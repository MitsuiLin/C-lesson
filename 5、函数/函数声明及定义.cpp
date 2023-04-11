# include <iostream>
using namespace std;

// 函数的声明，告知函数该如何引用，可以在后面进行定义
int add(int, int);


int main()
{
    int a = 100;
    int b = 3;

    int c = add(a,b);

    cout << c << endl;

    system("pause");
    return 0;
}

// 函数的定义
int add(int num1, int num2)
{
    return num1 + num2;
}