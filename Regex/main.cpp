#include <iostream>
#include<regex>

using namespace std;

int main()
{
    string a="umeshbhat";
    string c="^umesh$";
    regex b(c);
    if(regex_match(a,b))cout<<"found";
    else cout<<"error";
    return 0;
}
