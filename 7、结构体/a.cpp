# include <iostream>
# include <ctime>
# include <cstdlib>

using namespace std;

int main()
{
    //int d = time(NULL);
    for (int i = 0;i<7;i++)
    {
        int t = rand()%10;
        srand(time(NULL));
        cout << t;
    }


    system("pause");
    return 0;
}