# include <iostream>
using namespace std;

int & haha1()
{
    int a = 10;
    return a;
}

int haha2()
{
    int a = 10;
    return a;
}

int main()
{
    int a = 10;
    int &b = a;
    // 等效于 int * const b = &a，内部发现 b 为引用，自动将 b 转化为 *b 
    cout << a << endl;
    cout << b << endl;
    b = 20;
    cout << a << endl;
    cout << b << endl;

    haha1() = 100;
    // haha2 = 200;    // 表达式必须是可修改的左值C/C++(137)

    system("pause");
    return 0;
}