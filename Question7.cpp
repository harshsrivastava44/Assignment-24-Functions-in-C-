//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int addition(int x,int y,int z=0)
{   
    int sum=0;
    sum=x+y+z;
    return sum;
    
}
int main()
{
    int a,b,c;
    cout<<"Enter the Value of a , b and c \n";
    cin>>a>>b>>c;
    cout<<"sum of two numbers == "<<addition(a,b)<<endl;
    cout<<"sum of three numbers == "<<addition(a,b,c);
    return 0;
    
}