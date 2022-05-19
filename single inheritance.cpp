#include<iostream>
using namespace std;
class A
{
 public:
 int a,b;
void getdata()
{
  cout<<"enter a and b";
  cin>>a>>b;
}
void display()
{
 cout<<"a= "<<a;
 cout<<"b= "<<b;
 cout<<"Result is "<<a*b;
}
};
class B:public A
{

};
int main()
{
B b;
b.getdata();
b.display();
}
 

