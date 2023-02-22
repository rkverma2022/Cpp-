//inline function: use to save the memory space during execution time
//an inline function is one for which the compiler copiesthe code from the funciton definition directly into the code of the calling funciton rather
//than creatign a separeate set of isntructons in memory.
#include<bits/stdc++.h>
using namespace std;

int cube(int &);
int main()
{
    int x = 10;

    cout<<cube(x)<<endl;
    return 0;
}

int cube(int & y)
{
    return y*y*y;
}