#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 101; i <= 200; i++)
    {
        cout << i << endl;
    }

    a to z alphabet char name;
    for (name = 'a'; name <= 'z'; name++)
    {
        cout << name << endl;
        cout << name << " ";
    }

    // reverse loop 21 to 1

    int n, i;
    cout << "Enter the number:";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    // PRINT THE NUMBERS BY THE JUMP OF 3 // 1 to 100

        int i;
    for (i = 1; i <= 100; i = i + 3)
    {
        cout << i << endl;
    }

    // print a TABLE

    int i, n;
    cout << "Enter any number:";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << "*" << i << "=" << n * i << endl;
    }

    int n, pow, i, num;
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the power:";
    cin >> pow;
    num = n;
    for (i = 1; i < pow; i++)
    {
        num = num * n;
    }

    cout << num;

    // CALCULATE THE SUM OF NUMBERS

    int i, n, sum = 0;
    cout << "Enter the number:";
    cin >> n;
    cout<<((n+1)*n))/2;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;

    // FACTORIAL OF ANY NUMBER

    int n, i, fact = 1;
    cout << "Enter a number:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;

    // PRIME OR NOT PRIME NUMBER

    int i, n;
    cout << "Enter a number:";
    cin >> n;
    if (n < 2)
    {
        cout << "NOT PRIME NUMBER";
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "NOT PRIME NUMBER";
                return 0;
            }
        }

        cout << "prime number";
        return 0;
    }

    return 0;
}