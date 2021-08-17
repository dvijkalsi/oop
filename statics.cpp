#include <iostream>
#include<conio.h>

using namespace std;
class number
{
    static int c;
    int d;
    public:
      void count()
      { ++c;
        cout<<"\n c="<<c;
        cout<<" d="<<d;
      }
};
int number:: c;
int main()
{
    number a,b,c;
    static number d;

    d.count();
    d.count();
    a.count();
    d.count();
    return 0;
}
