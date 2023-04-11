# include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "请选择是否继续(y/n): " << endl;
    cin >> ch;

    switch(ch)
    {
        case 'y':
            cout << "继续" << endl;
            break;
        case 'n':
            cout << "不继续" << endl;
            break;
        default:
            cout << "非法输入" << endl;
            break;
    }

    system("pause");
    return 0;
}