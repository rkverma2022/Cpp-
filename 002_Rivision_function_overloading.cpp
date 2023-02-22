// function overloading
#include <iostream>
using namespace std;

void f();
void f(int);
void f(char);
void f(int, char);
void f(char, int);
void f(int, int);
void f(char, char);

int main()
{
    int x = 10;
    char y = 'H';
    f();
    f(x);
    f(y);
    f(x, y);
    f(y, x);
    f(x, x);
    f(y, y);

    return 0;
}

void f()
{
    cout<<"-----"<<endl;
}

void f(int x)
{
    cout<<"---int--"<<endl;
}

void f(char y)
{
    cout<<"-- char---"<<endl;
}
void f(char y, int x)
{
    cout<<"-- char--- int--"<<endl;
}
void f(int x, char y)
{
    cout<<"-- int--- char--"<<endl;
}
    
void f(int x, int y)
{
    cout<<"-- int--- int--"<<endl;
}
void f(char x, char y)
{
    cout<<"-- char--- char--"<<endl;
}