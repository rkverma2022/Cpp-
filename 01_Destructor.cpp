/*Destructor is an instance member function which is invoked automatically
 whenever an object is going to be destroyed.
 Destructor neither requires any argument nor returns any value.
 */
// Example:

#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "\n Constructor executed";
    }

    ~Test()
    {
        cout << "\n Destructor executed";
    }
};

main()
{
    Test t1, t2;

    return 0;
}
