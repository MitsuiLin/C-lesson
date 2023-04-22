# include <iostream>

using namespace std;

class Person
{
public:
    Person ()
    {
        cout << "无参构造" << endl;
        P_age = 0;
    }

    Person(int age)
    {
        cout << "有参构造" << endl;
        P_age = age;
    }

    Person(const Person & P)
    {
        
    }


private:
    int P_age;
    int P_height;
}

int main()
{

    system("pause");
    return 0;    
}