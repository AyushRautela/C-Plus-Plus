#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<< "Input String: \n";
    getline (cin, str);

    cout<< "Reversed String: \n";
    string::reverse_iterator reverse;
    for (reverse=str.rbegin(); reverse<str.rend(); reverse++)
    cout<< *reverse;

return 0;
}
