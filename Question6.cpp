//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
      int temp ;
      temp=a;
      a=b;
      b=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<"  b="<<b;
    return 0;
}