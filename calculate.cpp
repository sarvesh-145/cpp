#include<iostream>
using namespace std;
inline int operate(int x,int y,int n)
{
if(n==1)
return x+y;

else if(n==2)
return x-y;

else if(n==3)
return x*y;

else if(n==4)
return x/y;
}
int main()
{
cout<<"Menu: 1. Add 2. Sub 3. Mult 4. Div 5. Exit"<<endl;
int x,y,n;
cout<<"choose option: "<<endl;
cin>>n;
cout<<"enter two numbers: "<<endl;
cin>>x>>y;
cout<<"result"<<operate(x,y,n)<<endl;
return 0;
}
