#include<bits/stdc++.h>
using namespace std;

//multiple inheritance

class A{
    public:
    A()
    {
        cout<<"Contructor A"<<endl;
    }
    void display(){
        cout<<" Display A"<<endl;
    }
};
class B{
    public:
    B()
    {
        cout<<"Contructor B"<<endl;
    }
    void display(){
        cout<<" Display B"<<endl;
    }
};
class C: public A, public B
{
    public:
    C()
    {
        cout<<"Contructor C"<<endl;
    }
    void display(){
        cout<<" Display C"<<endl;
    }
};

int main()
{
    C c;
    c.display();
    c.A::display();
    c.B::display();
    c.C::display();
    
    

    return 0;
}