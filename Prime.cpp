#include<iostream>
using namespace std;

int main ()
{
    int n,i;
    cout<<"Enter the number to find the number is prime or not : ";
    cin >>n;
    bool isprime = true;
    if(n<=1)
    {
        isprime=false;
    }
    else{

        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
    {
        cout<<"Number is prime : "<<n;
    }
    else
    {
        cout<<"Number is not prime: "<<n;
    }

    return 0;
}

/* 1 is not prime 
loop 2 --- i*i<=n
n%i ==0 == then not prime

i*i<=n and i<sqrt(n) === same output detat */