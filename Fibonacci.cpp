#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to find the Fibonacci series : ";
    cin>>n;

    int a =0;
    int b = 1;
    cout<<a<<endl<<b;
    for(int i =2 ; i<n ;i++)
    {
        int c= a + b ;
        cout<<endl<<c;
        a = b ;
        b = c;
    }
    return 0;
}