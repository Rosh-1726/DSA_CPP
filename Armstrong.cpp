#include<iostream>
using namespace std;

int main ()
{
    int n ,sum=0,digit=0;
    cout<<"Enter the number: ";
    cin>>n;
    int num = n;
    while(n!=0)
    {
         digit = n % 10;
         sum = sum+ (digit * digit * digit);
         n = n/10;
    }
    if(sum == num)
    {
        cout<<"Number is Armstrong : "<<num;
    }
    else
    {
        cout<<"Number is not Armstrong: "<<num;
    }
    return 0;
}

/* 153,370 is armstrong number
123 , 200 are not armstrong number */