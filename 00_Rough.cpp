#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int real;
    int img;

    public:
        Complex(int a, int b)
        {
            this->real = a;
            this->img = b;
        }

        Complex operator + (Complex c1, Complex c2)
        {
            Complex t;
            t.real = c1.real + c2.real;
            t.img = c1.img + c2.img;

            return t;
        }

        
        void display()
        {
            cout<<this->real<<" + "<<this->img<<" i"<<endl;
        }
};

int main()
{
   Complex c1(10, 20);
   Complex c2(40, 48), c3;
   c3 = c1 + c2;
   c1.display();
    return 0;
}


