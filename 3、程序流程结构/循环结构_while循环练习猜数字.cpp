# include <iostream>
# include <ctime>
using namespace std;

int main()
{
    //srand((unsigned int)time(NULL));
    srand(time(0));
    int num = rand()%100 + 1;

    int val = 0;

    while(1)
    {
        cin >> val;
        if (val > num)
        {
            cout << "大了" << endl;
        }
        else if (val < num)
        {
            cout << "小了" << endl;
        }
        else
        {
            cout << "对了" << endl;
            break;
        }
    }

    system("pause");
    return 0;
}