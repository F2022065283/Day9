#include<iostream>
using namespace std;
int main()
{
    int check=0;
    string a="madam";
    int len=a.length();
    for(int i=1;i<len/2;i++)
    {
        if(a[i]==a[len-i])
        check=1;
    }
    if(check==1)
    cout<<"it's palidrome";
    else
    cout<<"It's not";
}