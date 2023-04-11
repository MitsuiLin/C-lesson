# include <iostream>

using namespace std;

int main()
{
   int a[] = {5,4,3,2,1};

   int * p = a;

   cout << "第一个元素：" << *p << endl;

   for (int i=0; i<5; i++)
   {
        cout << *p << endl;
        p++;
   }


   system("pause");
   return 0;
}