#include<iostream>
#include<math.h>
using namespace std;
int powerfun(int x,int n=2)
{
return pow(x,n);
}

int main()
{
int n;
cout<<"enter the number to be squared: "<<endl;
cin>>n;
cout<<"the squared value is"<<powerfun(n)<<endl;
return 0;
}
