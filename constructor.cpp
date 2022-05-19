#include<iostream>
using namespace std;
class demo
{
 public:
demo();
~demo();
};
demo::demo()
{
  cout<<"default constructor called"<<endl;
}
demo::~demo()
{
  cout<<"destructor called"<<endl;
}
int main();
{
  clrscr();
  demo d;
getch();
}