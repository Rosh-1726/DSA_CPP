#include<iostream>
using namespace std;
class SumPrimeRange
{
public:
    bool funrangesum(int n)
    {
        if(n<=1)
        {
            return false;
        }
        else{
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main ()
{
    int start, end,sum=0;
    cout<<"Enter the start and end value : ";
    cin>>start>> end ;

    SumPrimeRange s;
    for(int i=start ;i<=end;i++)
    {
        if(s.funrangesum(i))
        {
            sum= sum + i; // sum of prime no in range
            //cout<<i; = to print prime no in range

        }
    }
    cout<<sum;
}