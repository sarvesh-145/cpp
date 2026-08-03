#include<iostream>
using namespace std;
float computevolume(float h=7,float r=4.5)
{
return 3.14159*r*r*h;
}
int main()
{
float r,h;
cout<<"Volume (default radius 4.5 and height = 7.0):"<<computevolume()<<endl;
cout<<"enter height: ";
cin>>h;
cout<<"Volume (radius = 4.5):"<<computevolume(h)<<endl;
cout<<"enter radius and height: ";
cin>>r>>h;
cout<<"Volume: "<<computevolume(h,r)<<endl;
return 0;
}
