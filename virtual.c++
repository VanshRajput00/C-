#include<iostream>

using namespace std;

class Base
{
  protected:
  int a;
  public:
  Base()
  {
    a = 20;
  }
  virtual void Show() = 0; 
};

class Derived : public Base
{
  int b;
  public:
  Derived()
  {
    b =25;
  }
  void Show()
  {
    cout <<"\n a = " << a << "\n b = " << b;
  }
};

int main()
{
  Base *ptr;
  Derived D;
  ptr = &D;
  ptr -> Show();
  return 0;
}
