#include<iostream>
using namespace std;

namespace first
{
  void f()
    {
	  cout<<"In First"<<endl;
    } 	
}

namespace second
{
   void f()
    {
	  cout<<"In second";
    }		
}

using namespace first;
main()
{
  f();	
  second::f();	
}
