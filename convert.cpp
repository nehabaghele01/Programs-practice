#include <iostream>
using namespace std;

// convert 'a' to 'A'
// char convert(char name)
// {
//     char ans = name-'a'+'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cin>>name;

//     cout<<convert(name);
// }

int countdigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        int pow;
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cin >> num;

    // count digit
    int digit = countdigit(num);
    // armstrong number
}