//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int r)
{ 
    return 3.14*r*r;

}
int  area(int l,int b)
{
    return l*b;    
}
int area(float b,float h)
{  
    return ((b*h)/2);
}
int main()
{    
    int r;
    cout<<"Enter radius of a circle : ";
    cin>>r;
    cout<<"the Area of circle "<<area(r)<<endl; 
    int l,w;
    cout<<"Enter lenght and width of rectangle :";
    cin>>l>>w;
    cout<<"The Area of Rectangle is  "<<area(l,w)<<endl;
  float b,h;
  cout<<"enter base and height of a triangle :";
  cin>>b>>h;
  cout<<"The Area of triangle is :"<<area(b,h);
  return 0;
}