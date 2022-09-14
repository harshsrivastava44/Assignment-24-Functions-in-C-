//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=-1,b=1;
    int i,sum=0;
    for ( i = 1; 1; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if (sum==n)
        {
            cout<<n<<" is in Fibonacci series ";
              break;       
        }
       if (sum>n)
       {
        cout<<" Not found in series ";
        break;
       }
       
        
    }
    

}
int main()
{
    int x;
    cout<<"Enter a number ";
    cin>>x;
    fibonacci(x);
    return 0;
}