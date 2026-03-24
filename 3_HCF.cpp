#include<iostream>
using namespace std;

int main ()
{
    int num1, num2;
    cout<<"Enter the two numbers to find out the HCF: ";
    cin>>num1>>num2;

    while(num2 != 0)
    {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    cout<<"HCF : "<<num1;

    return 0;
}