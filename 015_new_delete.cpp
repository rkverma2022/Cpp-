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
    
    complex *ptr;
    ptr = new complex(300, 499);
    ptr->display();
    
    delete ptr;



    //array of objects
    cout<<"::::::: Array of Objects ::::::::::"<<endl;

    complex *pt[5];
    
    for(int i=0; i<5; i++)
    {
        pt[i] = new complex(i, i + 1);
        
    }

    for(int i=0;i<5;i++)
    {
        pt[i]->display();
        delete pt[i];
    }


    return 0;
}