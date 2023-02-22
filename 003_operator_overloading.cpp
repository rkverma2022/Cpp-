#include<bits/stdc++.h>
using namespace std;

// //struct variale || operator overloading
// typedef struct{
//     int real;
//     int img;

// }Complex;

// Complex operator + (Complex, Complex);
// Complex operator * (Complex, Complex);

// int main()
// {
//     Complex x1, x2, x3, x4;
//     x1.real = 10;
//     x1.img = 20;
//     x2.real = 10;
//     x2.img = 20;

//     x3 = x1 + x2;
//     cout<<"x1 + x2 = "<<x3.real<<" + i"<<x3.img<<endl;

//     x4 = x1 * x2;
//     cout<<"x1 * x2 = "<<x4.real<<" + i"<<x4.img<<endl;
//     return 0;
// }

// Complex operator + (Complex c1, Complex c2)
// {
//     Complex C3;
//     C3.img = c1.img + c2.img;

//     C3.real = c1.real + c2.real;

//     return C3;
// }

// Complex operator *(Complex c1, Complex c2)
// {
//     Complex C3;
//     C3.img = c1.real*c2.img + c1.img*c2.real;

//     C3.real = c1.real * c2.real - c1.img * c2.img;

//     return C3;
// }