# include <iostream>
using namespace std;

void bubblesort (int * arr, int len)
{
    for(int i = 0; i < len-1; i++)
    {
        for(int j = 0; j < len-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 打印数组函数
void printarray(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {   
        cout << arr[i] << endl;
    }
}


int main()
{
    int arr[] = {1,2,4,3,5,6,7};
    int len = sizeof(arr)/sizeof(int);

    bubblesort(arr, len);

    printarray(arr, len);
    system("pause");
    return 0;
}