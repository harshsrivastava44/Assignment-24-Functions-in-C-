//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int Highestdigit(int n);
int main()
{
    int x;
    cout<<"Enter a number :";
    cin>>x;
    cout<<"the highest value digit in a given number "<<Highestdigit(x);

}
int Highestdigit(int n)
{
  int max=-1;
  while (n)
  {
    if (max < n%10)
        max=n%10;
        n=n/10;
    
    
  }
   
   return max;
}