#include<iostream.h>
#include<conio.h>
class myclass
{
int rollno;
char name[10];
public:
void get()
{
cout<<"enter the values::"<<endl;
cin>>rollno;
cin>>name;
}
void put()
{
cout<<"********my information********"<<endl;
cout<<"my roll no=="<<rollno<<endl;
cout<<"my name=="<<name<<endl;
}
};
void main()
{
clrscr();
myclass m1;
m1.get();
m1.put();
getch();
}