#include <iostream>
using namespace std;
 class find_area
 {
   public:
     find_area(int len, int wid)
     {
       length=len;
       wide=wid;
     }
     double setarea()
     {
       area=length*wide;
     }
     double getarea()
     {
       return area;
     }


 private:
   double area;
   double length;
   double wide;
 };
int main(int argc, char const *argv[])
 {
   find_area acct(30,20);
   acct.setarea();
   std::cout<<"area ofthe rectangle = "<<acct.getarea();

   return 0;
 }
