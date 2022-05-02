#include<iostream.h>
#include<conio.h>
class numb
{
 public:
 int a,b;
 void  read()
 {
   cout<<"enter the two number";
   cin>>a>>b;
 }
 void display()
 {
   cout<<"a="<<a<<"b="<<b;
 }
};
int main()
{
 clrscr();
 numb n1;
 n1.read();
 n1.display();
 getch();
}