#include<iostream>
using namespace std;

int main()
{
    int h , m , s  ;
    string p;

    cout<<"Enter Hours , Minutes , seconds and period in the sequence : h,m,s,p ";
    cin>>h>>m>>s>>p;

    if(p=="AM")
    {
        if(h==12)
       {
           h=0;
       }
    }
    
    else if(h!=12)
    {
        h= h+12;
    }

    cout<<h<<":"<<m<<":"<<s<<":"<<p ;

    return 0;

}