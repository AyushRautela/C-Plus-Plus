#include<iostream>
using namespace std;
class  A{
public:
       int x;
protected:
       int y;
private:
       int z;
};

class B: protected A{// PROTECTED
public:
      B()
     {
      x=21;
      y=22;
      //z=23;//error
     }
     void display(){
     cout<<"x = "<<x<<endl<<"y = "<<y<<endl;//since 'z' cannot be used in this child class so printing is also not possible...
     }
};
int main()
{
       B o;
       o.display();
}
