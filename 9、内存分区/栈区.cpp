/*
内存通常是进行分区存储的，将不同类型的数据分别存储在不同的内存分区中
内存分区有：代码区、全局区、栈区、堆区
1、代码区：   自己写的代码（文本 .cpp)
            编译compile后的中间二进制代码（.obj)
            生成build后的可执行文件（.exe）
        共享（大家都可以调用）、只读（防止修改指令）
2、全局区：   全局变量、静态变量、字符串常量、全局常量（const修饰的全局变量）
3、栈区：   函数的形参、局部变量（包括main）、const修饰的局部常量，程序结束编译器自主释放内存
            --最好不要返回局部变量地址，释放后会产生乱码
4、堆区：   由程序员自主在堆区开辟内存（new），放在函数中，函数结束不释放内存
            --可以返回堆区地址
*/


# include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 20;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 20;

// 全局静态变量
static int s_g_a = 10;
static int s_g_b = 20;

int main()
{
    // 局部变量
    int a = 100;
    int * p = &a;

    cout << *p << endl;
    cout << *p << endl;

    system("pause");
    return 0;
}