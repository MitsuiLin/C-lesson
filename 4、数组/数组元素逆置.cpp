# include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int num;

    for (int i=0;i<(5/2);i++)
    {
        num = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = num;
    }

    for(int i = 0; i<5; i++)
    {
        cout << arr[i] << endl;
    }
    

    system("pause");
    return 0;
}