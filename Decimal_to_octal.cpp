#include<iostream>
using namespace std;

int main ()
{
    int n; 
    cout<<"Enter the value of N : ";
    cin>>n;

    int octal[32], i =0;

    if(n < 0 )
    {
        cout<<"Octal : "<<n;
    }

    while(n>0)
    {
        octal[i]= n % 8 ;
        n = n / 8 ;
        i++;
    }
    cout<<"Octal Number : ";
    for(int j =i-1;j>=0;j--)
    {
        cout<<octal[j];
    }
    return 0;
}