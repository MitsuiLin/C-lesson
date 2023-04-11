# include <iostream>
# include <string>

# define day 30         // 定义宏常量

using namespace std;

int main()
{
    /*
    第一个程序
    */
    int a = 10;
    cout << "a的值为: " << a << endl;   // a的值为：10

    /*
    常量
    */
    //day = 10;将会报错
    cout << "一个月有：" << day << "天" << endl;
    const int hour = 24;        //const修饰的变量
    cout << "一天有：" << hour << "小时" << endl;

    /*
    数据类型
    */
    char b = 'a';
    char c = 65;        // 字符以asc码方式进行存储，在asc码中，65对应A
    cout << "字符数据b的值为: " << b << endl;
    cout << "字符数据c的值为: " << c << endl;
    cout << "int所占的空间为: " << sizeof(int) << "字节" << endl;
    cout << "char所占的空间为: " << sizeof(b) << "字节" << endl;

    /*
    浮点型
    */
    float d = 3.14f;
    cout << d << endl;

    /*
    字符串
    */
    string str = "hello, world!";
    cout << str << endl;

    //bool
    bool flag = true;
    cout << flag << endl;

    // 从键盘输入数值
    /*
    int e = 0;
    cin >> e;
    cout << "e的赋值为: " << e << endl;
    */


    // 运算符
    int f = 5;
    int g = 2;
    cout << "5模2的结果为: " << f % g << endl;
    cout << "前置递增：" << f++*2 << endl;
    cout << "后置递增：" << ++g*2 << endl;

    // 比较运算符
    cout << "a与b是否相等: " << (a == b) << endl;
    cout << "a与b是否不相等: " << (a != b) << endl;
    b = a;
    cout << "此时a与b是否相等: " << (a == b) << endl;


    system("pause");
    return 0;
}