#include <iostream>
using namespace std;
int main()
{
    // Question-1

    int package;
    cin >> package;

    if (package > 10)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Rejected";
    }

    // Question-2

    int marks;
    cout << "Enter marks :";
    cin >> marks;

    if (marks > 33)
    {
        cout << "pass";
    }
    else
    {
        cout << "Fail";
    }

    // Question-3

    int a, b;
    cout << "Enter value of a:";
    cin >> a;

    cout << "Enter value of b:";
    cin >> b;

    if (a > b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    // Question-4 Even or odd num 

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "EVEN";
    }

    else
    {
        cout << "ODD";
    }

    // Question-5

    // pos, neg, zero if else - if else int num
    
    cout << "Enter a num:";
    cin >> num;

    if (num < 0)
    {
        cout << "Negative";
    }
    else if (num > 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Zero";
    }

    // Question-6

    char c = 'n';

    if (c == 'a')
    {
        cout << "Vowel";
    }
    else if (c == 'i')

    {
        cout << "Vowel";
    }
    else if (c == 'o')
    {
        cout << "Vowel";
    }
    else if (c == 'u')
    {
        cout << "Vowel";
    }
    else if (c == 'e')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    // Qestion-7

    int num;
    cout << "ENTER A NUMBER :";
    cin >> num;

    if (num == 1)
    {
        cout << "Mon";
    }
    else if (num == 2)
    {
        cout << "Tues";
    }
    else if (num == 3)
    {
        cout << "weds";
    }
    else if (num == 4)
    {
        cout << "Thurs";
    }
    else if (num == 5)
    {
        cout << "Fri";
    }
    else if (num == 6)
    {
        cout << "sat";
    }
    else if (num == 7)
    {
        cout << "Sundayy";
    }
    else
    {
        cout << "Enter a valid day";
    }
}