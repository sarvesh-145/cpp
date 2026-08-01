#include<iostream>
using namespace std;
int main()
{
    int n,fact=1,i;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1;i<=n;++i)
    {
     fact=fact*i;
    }
   cout<<fact<<" is the factorial value"<<endl;
   return 0;
}
