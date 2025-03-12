#include <iostream>
using namespace std;
// return_type fun name (para1 , para2) //func declare
//  {
//      {
//          code part // func definition
//      }
//  }
//  return value

// started...

int Sum(int m, int n) // func declare
{
    int ans = m + n; // func define
    return ans;
}
int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}
void fun()
{
    cout << "Hello Coder Army\n";
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers:";
    cin >> a >> b;

    // func call
    cout << Sum(a, b); // (a,b) called arguments
    cout << endl;

    cout << Mul(a, b); // (a,b) called arguments
    cout << endl;
    fun();
}

