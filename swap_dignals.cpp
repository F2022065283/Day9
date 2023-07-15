// swapping of diagnol elements 
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int a[t][t];
 for(int i=0;i<t;i++)
  {
  for(int j=0;j<t;j++)
  {
  cin>>a[i][j];
  }
  }
// before   
  
for(int i=0;i<t;i++)
{
  for(int j=0;j<t;j++)
{
  cout<<a[i][j]<<"  ";
}
cout<<endl;
}


int temp;
for (int i = 0; i < t; i++)
{
temp = a[i][i];
a[i][i] = a[i][t - i - 1];
a[i][t - i - 1] = temp;
}

cout<<"\n your array\n";

for(int i=0;i<t;i++)
{
  for(int j=0;j<t;j++)
{
  cout<<a[i][j]<<"  ";
}
cout<<endl;
}
}