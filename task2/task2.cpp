#include <iostream>
using namespace std;

class add
{
public:
     add (int val1,int val2)
     {
       num1=val1;
       num2=val2;
     }
     int setaddition ()
     {
       addition=num1+num2;
     }
     int getaddition()
     {
       return addition;
     }
private:
  int num1;
  int num2;
  int addition;

};
int main(int argc, char const *argv[])
{
  int val1,val2;
  cout<<"enter the first value ";
  cin>>val1;
  cout<<"enter the second value ";
  cin>>val2;
  add acct(val1,val2);
  acct.setaddition();
  std::cout<<"addition of two number is = "<<acct.getaddition();

  return 0;
}
