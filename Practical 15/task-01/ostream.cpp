#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    cout<<"Ayush Rautela SEC:A 200211184";
    ofstream m;
    m.open("hlo.txt");
    m<<"hello\n";
    m.close();
    
    ifstream f;
    f.open("hlo.txt");
    string data;
    getline(f,data);
    cout<<data<<endl;
    f.close();  
    return 0;
}
