#include<iostream>
using namespace std;

bool isPal(int n)
{
    int temp = n, rev = 0;
    while(n > 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return temp == rev;
}
int main ()
{
    int num=0 ;
    cout<<"Enter the number to check ";
    cin>>num;

    bool result = isPal(num);
    cout<<"result : "<<result;
    return 0;
}