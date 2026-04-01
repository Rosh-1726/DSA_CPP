#include<iostream>
using namespace std;

int main ()
{
    int n,digit,count=0;
    cout<<"Enter the Number: ";
    cin>>n;

    while(n!=0)
    {
        digit = n %10;
        count = count+1;
        n = n/10;
    }
    cout<<"Count of Digits is : "<<count;

    return 0;
}