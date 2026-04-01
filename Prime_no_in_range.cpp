#include<iostream>
using namespace std;

class Prime
{
public:
    bool primefun(int n)   
    {
        if(n <= 1)
            return false;

        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    int start, end;
    Prime p;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for(int i = start; i <= end; i++)
    {
        if(p.primefun(i))
        {
            cout << i << " ";   
        }
    }
}

/* public : format
Give the datatype to the parameter value 
create object then access the function from class */