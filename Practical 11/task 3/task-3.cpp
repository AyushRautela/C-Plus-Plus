//dimond problem
#include<iostream>
using namespace std;
class A{
      public:
      void d1()
      {
              cout<<"\ndA\n";
      }
};

class B: public A{
      public:
      void d2()
      {
              cout<<"\ndB\n";
      }
};

class C:public A{
     public:
     void d3()
     {
             cout<<"\ndC\n";
     }
};
class D:public B,public C{
       public:
       void d4()
       {
               cout<<"\ndD\n";
       }
};
int main()
{
        D obj;
        obj.d4();
        obj.d3();
        obj.d2();
        obj.d1();//ambigious condition
        return 0;
}
