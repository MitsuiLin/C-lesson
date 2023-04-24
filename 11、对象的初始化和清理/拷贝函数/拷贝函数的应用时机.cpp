# include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "无参构造函数" << endl;
        age = 0;
        height = 0;
    }

    Person(int a, int b)
    {
        cout << "有参构造函数" << endl;
        age = a;
        height = b;
    }

    Person(const Person & P)
    {
        age = P.age;
        height = P.height;
        cout << "拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "析构函数" << endl;
    }

public:
    int age;
    int height;
};

void test01()
{
    Person p1(20, 50);
    Person p2(p1);
    cout << p1.age << p1.height << endl;
    cout << p2.age << p2.height << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}