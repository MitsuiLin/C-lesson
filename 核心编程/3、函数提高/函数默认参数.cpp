# include <iostream>
using namespace std;

// 函数默认参数
void hanshu(int i, int j = 10)
{
    cout << i << "\t"  << j << endl;
}

// 函数站位参数
void hanshu1(int,int i)
{
    cout << i << endl;
}
void hanshu2(int i,int=10)
{
    cout << i << endl;
}

int main()
{
    //hanshu();  //函数调用中的参数太少C/C++(165)
    hanshu(9); // 9  10
    hanshu(9,20); //9  20

    //hanshu1(9);  //函数调用中的参数太少C/C++(165)
    hanshu1(9,20);
    hanshu2(9);

    system("pause");
    return 0;
}