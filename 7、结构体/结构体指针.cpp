# include <iostream>
using namespace std;

int main()
{
        struct student
    {
        string name;
        int age;
        int score;
    };

    student a1 = {"张三", 20, 80};

    student * p = &a1;

    cout << p->name << endl;
    cout << p ->age << endl;
    cout << p->score << endl;

    system("pause");
    return 0;
}

/*
输出结果：
张三
20
80
*/