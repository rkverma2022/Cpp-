#include<iostream>
using namespace std;


// //copy constructor
// //Destructor
// class complex
// {
//     private:
//     int real;
//     int img;

//     public:
//         complex(int r, int i)
//         {
//             real = r; img = i;
//         }
//         complex(complex &c1)
//         {
//             real = c1.real;
//             img  = c1.img;
//         }

//         void display()
//         {
//             cout<<real<<" + i"<<img<<endl;
//         }

//         ~complex(){
//             cout<<"Destructor Called"<<endl;
//         }

// };
// int main()
// {
//     complex c1(10, 39);
//     c1.display();

//     complex c2(c1);
//     c2.display();
    
//     return 0;
// }




////Default and Parameterized constructor

// class A
// {
//     private:
//     int y;
//     public:
//     int x;
//     A(){
//         cout<<"Default constructor"<<endl;
//     }
//     A(int r, int j)
//     {
//         cout<<"Parameterized Constructor"<<endl;
//         y = r;
//         x = j;
//     }
// };

// int main()
// {
//     A a;
//     A b(10, 29);
//     return 0;
// }