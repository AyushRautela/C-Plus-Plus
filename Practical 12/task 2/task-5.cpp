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

class B: protected A{

public:
B()
{
x=21;
y=22;
//z=23;//error
}
void display(){
cout<<x<<" "<<y<<" "<<endl;
}
};
int main()
{
B o;
o.display();
//o.x=30;//error as x is protected for class B
//o.y=40;//error as protected
//o.z=50;//error as private 
o.display();
}
