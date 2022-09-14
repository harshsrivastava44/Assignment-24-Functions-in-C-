//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void prime(int n);
int main()
{
    int x;
    cout<<"Enter a number :\n";
    cin>>x;
    prime(x);

}
void prime(int n)
{     int i,flag=0;
     for ( i = 2; i <n/2; i++)
     {
      if (n%i==0){
        flag=1;}
     }
     if(flag==1)
    cout<<"not a prime number";
      if(flag==0)
      cout<<n<<" is prime number ";     
}