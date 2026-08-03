#include<iostream>
using namespace std;
void getInput(int&a,int&b)
{
cout<<"enter n1: ";
cin>>a;
cout<<"enter n2: ";
cin>>b;
}
void swap(int&a,int&b)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int a,b;
getInput(a,b);
swap(a,b);
cout<<"after swapping are: \na="<<a<<"\nb="<<b<<endl;
return 0;
}
