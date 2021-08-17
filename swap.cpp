#include<iostream>
using namespace std;
class swapp
{ int val1,val2;

public:
  void getvalue(int x, int y)
{ val1=x; val2=y;}
  void putvalue(void)
{ cout<< "val1="<<val1<<endl;
  cout<<"val2="<<val2<<endl;
}
  void exchange(swapp &);
};
void swapp::exchange(swapp &obj1)
{
  int temp=obj1.val1;
  obj1.val1=obj1.val2;
  obj1.val2 =temp;
}
 int main()
{
swapp obj;
obj.getvalue(3,7);
cout<<"Before swpping::"<<endl;
obj.putvalue();
cout<< "After swappping::"<<endl;
obj.exchange(obj);
obj.putvalue();
}