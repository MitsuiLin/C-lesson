# include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a <= 60)
    {
        cout << "不及格" << endl;
    }
    else if (a <= 80)
    {
        cout << "及格" << endl;
    }
    else if (a <= 90)
    {
        cout << "良好" << endl;
    }
    else
    {
        cout << "优秀"  << endl;
    }

    system("pause");
    return 0;
}