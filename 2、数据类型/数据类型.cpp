# include <iostream>

using namespace std;

int main()
{
    // 整型变量
    int a = 10;

    // 字符型
    char ch = 'h';

    // 字符串
    string str = "hello";

    // 布尔类型
    bool flag = false;

    cout << "int所占大小为: " << sizeof(int) << endl;
    cout << "a的值为: " << a << "   a的大小为: " << sizeof(a) << endl;
    cout << "ch的值为: " << ch << "   ch的大小为: " << sizeof(ch) << endl;
    cout << "str的值为: " << str << "   str的大小为: " << sizeof(str) << endl;
    cout << "flag的值为: " << flag << "   flag的大小为: " << sizeof(flag) << endl;

    cout << "请对整型变量a进行赋值: " << endl;
    cin >> a;
    cout << "a的值为: " << a << endl;


    system("pause");
    return 0;
}

/*
输出的值为：
            int所占大小为: 4
            a的值为: 10   a的大小为: 4
            ch的值为: h   ch的大小为: 1
            str的值为: hello   str的大小为: 24
            flag的值为: 0   flag的大小为: 1
            请对整型变量a进行赋值: 
            123
            a的值为: 123
*/