#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img;
    public:
        complex(int r, int i);
        void display();
};

complex::complex(int r, int i)
{
    this->real = r;
    this->img = i;
}

void complex::display()
{
    cout<<this->real<<" + "<<this->img<<" i"<<endl;
}

int main()
{
    complex c(10, 39);
    c.display();

    

    return 0;
}