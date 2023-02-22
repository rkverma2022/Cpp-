//union
#include<iostream>
using namespace std;


int main()
{



    // //4A. const keywords || A. const as variables  || B. const as reference
    // const int x = 10;   // x is now read only variable we can't do any modification in x
    // // x +=1;           //error
    // cout<<x <<endl;

    // //4B. 
    // const int &y = x; // y is now read only variable we can't do any modification in x
    // // y +=1;
    // cout<<y<<endl;

    // //4C.
    // const int *ptr = &x;
    // // *ptr +=1;       //not allowed

    // ptr = &y;       //although we can indication of pointer
    // cout<<*ptr;




    // //3. reference
    // int x = 10;
    // int &y = x;
    // int &z = x;
    // cout<<x<<", "<<y<<", "<<z<<endl;
    // cout<<&x<<", "<<&y<<", "<<&z<<endl;


    // //2A. null pointer 
    // float *ptr, x = 10.98;
    // char ch = 'H';
    // ptr = NULL;
    // ptr = &x;
    // cout<<*ptr<<endl;
    // //2B. void pointer
    // void *pt = &x;
    // cout<<pt<<endl;
    
    // cout<< *((float *)pt)<<endl;
    // pt = NULL;
    // pt = &ch;
    // cout<< *((char *)pt)<<endl;

    // //2B. ptr1
    // float *ptr1 = &x;
    // cout<<*ptr1<<endl;
    



    //1A. union
    union A
    {
        int x;
        char y;
        bool z;
    };

    A a;
    a.x = 10;
    a.y = 'c';
    a.z = false;
    //1B.
    union
    {
        int p;
        char q;
        bool r;
    };
    p = 20;
    cout<<p<<endl;
    q = 'a';
    cout<<q<<endl;
    r = true;
    cout<<r<<endl;
    
    
    return 0;
    
}