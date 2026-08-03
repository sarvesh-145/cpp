#include<iostream>
using namespace std;
double calculatevolume(double side)
  {
   return side*side*side;
  }
double calculatevolume(double length,double width,double height)
  {
   return length*width*height;
  }
double calculatevolume(double radius,double height)
  {
   return 3.14159*radius*radius*height;
  }
int main()
{
double a;
cout<<"\nenter the side of the cube: ";
cin>>a;
cout<<"volume of cube="<<calculatevolume(a)<<endl;
double l,b,h;
cout<<"\nenter the length,width and height of the rectangular box: ";
cin>>l>>b>>h;
cout<<"volume of rectangular box="<<calculatevolume(l,b,h)<<endl;
double r,x;
cout<<"\nenter the radius and height of the cylinder: ";
cin>>r>>x;
cout<<"volume of cylinder="<<calculatevolume(r,x)<<endl;
return 0;
}
