#include<bits/stdc++.h>
using namespace std;
class B
{
    private:
    int y;
    public:
    B()
    {
        cout<<": ::: constructor B  ::::"<<endl;
    }
    ~B()        //it destroyed the object after use of class B | no need to pass any parameter| no return
    {
        cout<<"Destructor B"<<endl;
    }
    void load(int x)
    {
        this->y = x;
    }
    void display()
    {
        cout<<":::::::: class B "<<this->y<<endl;
    }
};
class A:public B
{
    private:
    int x;
    public:
    A()
    {
        cout<<": ::: constructor A:::::"<<endl;
    }
    ~A()        //it destroyed the object after use of class A | no need to pass any parameter| no return
    {
        cout<<"Destructor A"<<endl;
    }
    void load(int x)
    {
        this->x = x;
    }
    void display()
    {
        cout<<":::::::: class A "<<this->x<<endl;
    }
};

int main()
{
    A a;
    a.load(20);
    a.display();
    
    a.A::load(40);
    a.A::display();
    a.B::load(100);
    a.B::display();
    

    return 0;
}