/*
结构体是用户自定义的数据类型，以特定的顺序包含多种数据
定义：
    struct 结构体类型{数据类型 成员值；。。}

结构体赋值：
    首先创建一个结构体变量： 结构体类型 变量名
    赋值操作： 变量名.成员 = 值

    或者在创建变量时直接进行结构体赋值： 结构体类型 变量名 = {成员1值，成员2值，...}

结构体数组：
    结构体类型 数组名[] = {{成员1值，成员2值，...}，{...}, ...}

*/

# include <iostream>
# include <string>

using namespace std;

int main()
{
    struct student
    {
        string name;
        int age;
        int score;
    };

    student arr[] = 
    {
        {"张三", 20, 80},
        {"李四", 30, 90},
        {"王五", 40, 100}
    };

    cout << "姓名\t" << "年龄\t" << "分数" << endl;

    for (int i=0; i<3; i++)
    {
        cout << arr[i].name << "\t";
        cout << arr[i].age << "\t";
        cout << arr[i].score << endl;
    }

    system("pause");
    return 0;
}

/*
输出结果：
姓名    年龄    分数
张三    20      80
李四    30      90
王五    40      100
*/