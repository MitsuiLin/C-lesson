# include <iostream>

using namespace std;

int main()
{
   int a = 10;

   int * p = &a;

   // 指针的实质是地址
   cout << "a的地址为: " << p << endl;

   // 指针所占的空间为8位，1字节
   cout << sizeof(p) << endl;
   system("pause");
   return 0;
}