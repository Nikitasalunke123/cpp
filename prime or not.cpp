#include<iostream>
using namespace std;
class test
{
  public:
int check(int x)
{
  int i,p=0;
for (i=2;i<x;i++)
{
 if(x%i==0)
 {
   p=1;
   break;
 }
} 
return p;
}
};
int main()
{
 int x,p;
cout<<"enter a number";
cin>>x;
test obj;
p=obj.check(x);
if (p==0)
{
 cout<<"number is prime:"<<x;
} 
else
{
 cout<<"number is not prime:"<<x;
}
}
 

