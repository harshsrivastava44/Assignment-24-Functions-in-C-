/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
  #include<iostream>
  using namespace std;
  int Maximum(int a,int b)
  {
    int max=0;
     if (a>b)
        max=a;
     if(b>a)
     max=b;
     return max;
  }
  float Maximum(float a,float b)
  {
    float max=0;
     if(a>b)
     max=a;
     if(b>a)
     max=b;
     return max;
  }
  int main()
  {  
    int a=45,b=88;
    float x=11.2,y=11.5;
    cout<<"the maximum number is "<<Maximum(a,b)<<endl;
    cout<<"the maximum number is "<<Maximum(x,y)<<endl;
    return 0;

  }