// 10. Write functions using function overloading to add two numbers having different data types.
#include <iostream>
using namespace std;
float add(float a, float b)
{
    float c;
    c = a + b;
    return c;
}
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
int main()
{
    int p, q;
    cout << "Enter two number : ";
    cin >> p >> q;
    cout << "\nthe sum is :" << add(p, q) << endl;
    float m, n;
    cout << "Enter two number : ";
    cin >> m >> n;
    cout << "\nthe sum is :" << add(m, n);
    return 0;
}