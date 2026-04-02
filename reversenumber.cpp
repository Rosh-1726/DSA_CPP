#include<iostream>
using namespace std;

int rev(int n)
{
    int r = 0;
    while(n > 0)
    {
        r = r*10 + n%10;
        n /= 10;
    }
    return r;
}

int main()
{
    int num = 0;
    cout<<"Enter Number: ";
    cin>>num;

    int result = rev(num);   // store result
    cout<<"Reverse = "<< result;   // print

    return 0;
}