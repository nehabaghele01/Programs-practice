#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the  number:";
    cin >> num;
    int mul = 1, ans = 0, rem;
    // DECIMAL to binary
    while (num > 0)
    {
        // remainder
        rem = num % 2;
        // num ko divide kr do
        num = num / 2;
        // ans
        ans = mul * rem + ans;
        // mul
        //  mul*=2;
        mul = mul * 10;
    }
    cout << ans << endl;
}
// {
//     int num;
//     cout<<"Enter the  number:";
//     cin>>num;
//     int mul=1, ans=0, rem;
// //binary to DECIMAL
//     while(num>0)
//     {
//         //remainder
//         rem=num%10;
//         // num ko divide kr do
//         num = num/10;
//         //ans
//         ans=mul*rem+ans;
//         //mul
//         // mul*=2;
//         mul*=2;
//     }
//     cout<<ans<<endl;
// }