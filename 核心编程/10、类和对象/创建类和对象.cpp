# include <iostream>
using namespace std;

// 创建学生类
class student
{
public:

// 姓名 可读可写
    void set_name()
    {
        cout << "输入姓名：" ;
        cin >> s_name;
    }
    string get_name()
    {
        return s_name;
    }

// 学号 只写
    void set_number()
    {
        cout << "输入学号：" ;
        cin >> s_id;
    }

// 老师 只读
    string get_teacher()
    {
        return t_name;
    }


private:
    string s_name;
    string s_id;
    string t_name = "LH";
};

int main()
{
    student s1;

    s1.set_name();
    cout << s1.get_name() << endl;
    s1.set_number();
    cout << s1.get_teacher() << endl;

    system("pause");
    return 0;
}