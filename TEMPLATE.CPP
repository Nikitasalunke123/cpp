#include<iostream.h>
#include<conio.h>
template <class T>
void swap(T&x,T&y)
{
 T t;
 t=x;
 x=y;
 y=t;
 cout<<"in swap\n"<<"x="<<x<<"\ty="<<y<<endl;
}
 void main()
 {
  clrscr();
  int a,b;
  a=10; b=20;
  char ch1,ch2;
  ch1='h',ch2='j';
  swap(a,b);
  swap(ch1,ch2);
  getch();
 }