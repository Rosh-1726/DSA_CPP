#include<iostream>
using namespace std;

int main ()
{
    int a,b,rem;
    cout<<"Enter 2 numbers to find HCF: ";
    cin >>a>>b;

    while(b!=0)
    {
        rem = a % b ;                // divisor / remainder until rem=0
        a= b;
        b= rem;
    }
    cout<<"HCF is : "<<a;

    return 0;
}

/* 
for multi line command = Shift + ALT + A
large value % small value = rem 
divisor % rem 
until rem =0  
*/