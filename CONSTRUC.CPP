#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 demo()
 {
   cout<<"constructor function called\n";
 }
 void show()
 {
  cout<<"simple function called\n";
 }
};
void main()
{
 clrscr();
 demo d1;
 d1.show();
 getch();
}
