# include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "默认构造函数" << endl;
    }

    Person(int age, int height)
    {
        m_age = age;
        m_height = height;
        cout << "拷贝构造函数 " << m_age << " " << m_height << endl;
    }

    ~Person()
    {
        cout << "析构函数" << endl;
    }

public:
    int m_age;
    int m_height;
};

void test()
{
    Person p1(16,180);
    Person p2(p1);
    cout << "p1:" << p1.m_age << p1.m_height << endl;
    cout << "p2:" << p2.m_age << p2.m_height << endl;
}

int main()
{

    system("pause");
    return 0;
}