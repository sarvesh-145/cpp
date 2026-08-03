
#include<iostream>
using namespace std;
void sort(int a[],int n)
{
int temp,i,j;
for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
   {
	if(a[i]>a[j])
 	{
  	temp=a[i];    
  	a[i]=a[j];
  	a[j]=temp;
 	}
   }
 }
}    
void sort(float a[],int n)
{
float temp;
int i,j;
for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
   {
	if(a[i]>a[j])
 	{
  	temp=a[i];    
  	a[i]=a[j];
  	a[j]=temp;
 	}
   }
 }
}    
void sort(char a[],int n)
{
char temp;
int i,j;
for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
   {
	if(a[i]>a[j])
 	{
  	temp=a[i];    
  	a[i]=a[j];
  	a[j]=temp;
 	}
   }
 }
}
int main()
{
cout<<"Menu: 1. Integer 2. Float 3. Character 4. Exit"<<endl;
cout<<"choose type: ";
int x;
cin>>x;
switch(x)
{
case 1:
int a[10],p,i;
cout<<"enter the number of elements: "<<endl;
cin>>p;
cout<<"enter the elements of the array: "<<endl;
for(int i=0;i<p;i++)
{
cin>>a[i];
}
sort(a,p);
cout<<"sorted array: "<<endl;
for(i=0;i<p;i++)
{cout<<a[i];}
break;

case 2:
float b[10];
int q;
cout<<"enter the number of elements: "<<endl;
cin>>q;
cout<<"enter the elements of the array: "<<endl;
for(int i=0;i<q;i++)
{
cin>>b[i];
}
sort(b,q);
cout<<"sorted array: "<<endl;
for(i=0;i<p;i++)
{cout<<a[i];}
break;

case 3:
char c[10];
int r;
cout<<"enter the number of elements: "<<endl;
cin>>r;
cout<<"enter the elements of the array: "<<endl;
for(int i=0;i<r;i++)
{
cin>>c[i];
}
sort(c,r);
cout<<"sorted array: "<<endl;
for(i=0;i<p;i++)
{cout<<a[i];}
break;

case 4:
cout<<"EXITING CODE"<<endl;

default:
cout<<"INVALID OPTION"<<endl;
}
return 0;
}
