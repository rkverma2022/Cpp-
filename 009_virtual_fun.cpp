
#include<bits/stdc++.h>
using namespace std;


//pure virtual function
class animal{
    public:
    
    virtual void sound()=0;
    virtual void type()=0;
};
class dog: public animal
{
    public:
    void sound(){
        cout<<"  Barking  "<<endl;
    }
    void type(){
        cout<<" veg and non veg"<<endl;
    }
};
class lion: public animal
{
    public:
    void sound(){
        cout<<"  hore "<<endl;
    }
    void type(){                            //if you comment it then it will through error due to pure virtual fun
        cout<<" non veg "<<endl;
    }
};
int main()
{
    dog d;
    lion l;
  
    animal *ptr;
    ptr = &d;
    ptr->sound();
    ptr->type();


    ptr = &l;
    ptr->sound();
    ptr->type();
    return 0;
}



////try-2
// //inheritance
// // A type of function in base class that allows actual functions in derived classes to be polymorphic
// class animal{
//     public:
    
//     virtual void sound(){
//         cout<<"  ?????????  "<<endl;
//     }
//     virtual void type(){
//         cout<<" ??? "<<endl;
//     }
// };
// class dog: public animal
// {
//     public:
//     void sound(){
//         cout<<"  Barking  "<<endl;
//     }
//     void type(){
//         cout<<" veg and non veg"<<endl;
//     }
// };
// class lion: public animal
// {
//     public:
//     void sound(){
//         cout<<"  hore "<<endl;
//     }
//     void type(){
//         cout<<" non veg "<<endl;
//     }
// };

// int main()
// {
    // // one way to print 
    // cout<<":::::::::::::: First way :::::::::::"<<endl;
    // dog d;
    // d.sound();
    // d.type();
    

    // lion l;
    // l.sound();
    // l.type();

    //second way||| using virutal function
    //if we don't use virtual in animal then we can't access dog's or lion's functions though animal
    //if anyof the method or fun wouldn't be available in dog or lion class then it
    //will print function of it's own.

//     cout<<"::::::::: second way :::::"<<endl;
//     animal *ptr;
//     ptr = &d;
//     ptr->sound();
//     ptr->type();


//     ptr = &l;
//     ptr->sound();
//     ptr->type();
//     return 0;
// }




////try -1

// class animal{
//     public:
    
//     virtual void sound(){
//         cout<<"  ?????????  "<<endl;
//     }
//     virtual void type(){
//         cout<<" ??? "<<endl;
//     }
// };
// class dog: public animal
// {
//     public:
//     void sound(){
//         cout<<"  Barking  "<<endl;
//     }
//     void type(){
//         cout<<" veg and non veg"<<endl;
//     }
// };
// class lion: public animal
// {
//     public:
//     // void sound(){
//     //     cout<<"  hore "<<endl;
//     // }
//     // void type(){
//     //     cout<<" non veg "<<endl;
//     // }
// };

// int main()
// {
//     // one way to print 
//     cout<<":::::::::::::: First way :::::::::::"<<endl;
//     dog d;

//     lion l;
  

//     //second way||| using virutal function
//     //if we don't use virtual in animal then we can't access dog's or lion's functions though animal
//     //if anyof the method or fun wouldn't be available in dog or lion class then it
//     //will print function of it's own.

//     cout<<"::::::::: second way :::::"<<endl;
//     animal *ptr;
//     ptr = &d;
//     ptr->sound();
//     ptr->type();


//     ptr = &l;
//     ptr->sound();
//     ptr->type();
//     return 0;
// }