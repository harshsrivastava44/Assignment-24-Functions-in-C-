//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int n,int a);
int main()
{
    int x,y;
    cout<<"Enter a number and its power:";
    cin>>x>>y;
    cout<<x<<" raised to the power "<<y<<"=="<<power(x,y);

}
int power(int n,int a)
{  
    int i,temp=1;
    for(i=1;i<=a;i++)
    {
        temp=n*temp;
    }
   return temp;
}
