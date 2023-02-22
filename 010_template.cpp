#include<iostream>
using namespace std;

// class template

template<typename T>
class A
{
    public:
    int g(T x, T y);
};

template<typename T>
int A<T>::g(T x, T y)
{
    return x*y;
}

int main()
{
    A <int> a;
    cout<<a.g(2, 8)<<endl;

    return 0;
}






////type -2

// template<typename T>
// inline T f(T, T);            ////inline just i have added extra feature, you can avoid it also

// int main()
// {
//     cout<<f(100, 5)<<endl;
//     return 0;
// }

// template<typename T>
// T f(T a, T b)
// {
//     cout<<a<<", " <<b<<endl;
//     return a*b;
// }





////template type -1
// template<typename T1, typename T2>
// void f(T1 a, T2 b)
// {
//     cout<<a<<", " <<b<<endl;
// }
// int main()
// {
//     f(100, 200.74);
//     return 0;
// }