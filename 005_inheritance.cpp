#include <bits/stdc++.h>
using namespace std;


class color
{
    public:
        string color_name;
        int intensity;
        color()
        {
            cout << "color constructor called" << endl;
        }
};

class animal: public color
{
    public:
        int num_legs;
        animal()
        {
            cout << "animal constructor" << endl;
        }
    
};

int main()
{
    animal A;
    A.color_name = "pink";
    A.intensity = 100;
    A.num_legs = 8;
    cout<<A.color_name<<endl;
    cout<<A.intensity<<endl;
    cout<<A.num_legs<<endl;

    cout << ":::::::::::::::::::::::::::::::::::::" << endl;
    cout<<"------way 1 -----"<<endl;
    //There are two way to access the public method or fun or property of color
    animal::color c;
    c.color_name = "RED";
    c.intensity = -1999;
    cout << c.color_name << endl;
    cout << c.intensity << endl;

    cout<<"---- way 2 ----"<<endl;
    color d;
    d.color_name = "RED";
    d.intensity = -1999;
    cout << d.color_name << endl;
    cout << d.intensity << endl;

    return 0;
}



//inheritance:: 3rd way to do the same thing
// class color
// {
//     public:
//         string color_name;
//         int intensity;
//         color()
//         {
//             cout << "color constructor called" << endl;
//         }
// };

// class animal
// {
//     public:
//         int num_legs;
//         animal()
//         {
//             cout << "animal constructor" << endl;
//         }
//         color e;
    
// };

// int main()
// {
//     animal A;
//     A.e.color_name = "pink";
//     A.e.intensity = 100;
//     A.num_legs = 8;

//     cout << A.e.color_name << endl;
//     cout << A.e.intensity << endl;
//     cout << A.num_legs << endl;

//     cout << ":::::::::::::::::::::::::::::::::::::" << endl;

//     color c;
//     c.color_name = "RED";
//     c.intensity = -1999;
//     cout << c.color_name << endl;
//     cout << c.intensity << endl;

//     return 0;
// }






// inheritance: 2nd way to write the same code
//  class animal
//  {
//      public:
//      animal(){
//          cout<<"animal constructor"<<endl;
//      }
//      int num_legs;
//      class color
//      {
//          public:
//          color()
//          {
//              cout<<"color constructor called"<<endl;
//          }

//         string color_name;
//         int intensity;
//     };
//     color e;       //inheritance

// };

// int main()
// {
//     animal A;
//     A.e.color_name = "pink";
//     A.e.intensity = 100;
//     A.num_legs = 8;

//     cout<<A.e.color_name<<endl;
//     cout<<A.e.intensity<<endl;
//     cout<<A.num_legs<<endl;

//     cout<<":::::::::::::::::::::::::::::::::::::"<<endl;

//     animal::color c;
//     c.color_name = "RED";
//     c.intensity = -1999;
//     cout<<c.color_name<<endl;
//     cout<<c.intensity<<endl;

//     return 0;
// }

////Inheritance:: 1st way to write the above code
// struct color
// {
//     string color_name;
//     int intensity;
// };

// struct animal
// {
//     color e; // inherite
//     int num_legs;
// };

// int main()
// {
//     animal A;
//     A.e.color_name = "Black";

//     A.e.intensity = 100;

//     A.num_legs = 4;

//     cout<<A.e.color_name<<endl;
//     cout<<A.num_legs<<endl;

//     return 0;
// }