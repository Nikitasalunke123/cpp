#include<iostream>
using namespace std;
class demo
{
 public:
 int a,b;
void show()
{
 cout<<"simple function\t";
}
void show(int x)
{
 cout<<"value\n"<<x;
}
void show(int j, int k)
{
a=j;
b=k; 
cout<<a+b;
}
};
int main()
{
demo d1;
d1.show();
d1.show(5);
d1.show(6,7);
}
