#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    cout<<"enter the range: "<<endl;
    cin>>x>>y;
    cout<<"the numbers are: ";
    for(i=x;i<=y;i++)
    {
        cout<<i<<",";
    }
    return 0;
}
