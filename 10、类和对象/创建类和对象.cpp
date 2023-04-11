# include <iostream>
using namespace std;

// 创建学生类
class student
{
public:
    string s_name;
    string s_id;

    void set_name()
    {
        cout << "输入姓名：" ;
        cin >> s_name;
    }

    void set_number()
    {
        cout << "输入学号：" ;
        cin >> s_id;
    }

    void print_student()
    {
        cout << "姓名：" << s_name << "\t" << "学号：" << s_id << endl;
    }
};

int main()
{
    student s1;

    s1.set_name();
    s1.set_number();
    s1.print_student();

    system("pause");
    return 0;
}