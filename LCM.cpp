#include<iostream>
using namespace std;
class lcm
{
    public:
    int gcd(int a , int b )
    {
        while(b!=0)
        {
            int rem = a % b ;
            a = b; 
            b = rem ;
        }
        return a;
    }
};
int main()
{
    int num1 , num2 , rem =0 ;
    cout<<"Enter the num1 and num2 to find LCM : ";
    cin >>num1>>num2;

    lcm obj ; 
    int res = obj.gcd(num1 , num2);
    int lcm = (num1 * num2) / res;

    cout<<"GCD: "<<res<<endl;
    cout<<"LCM: "<<lcm<<endl;

    return 0;
}