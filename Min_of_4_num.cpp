#include<iostream>
using namespace std;

int main ()
{
    int a ,b,c,d;
    cout<<"Enter the number of a,b,c,d: ";
    cin>>a>>b>>c>>d;

    if(a<b && a<c && a<d)
    {
        cout<<"minimun is : "<<a;
    }
    else if(b<a && b<c && b<d)
    {
        cout<<"minimun is : "<<b;
    }
    else if (c<b && c<a && c<d)
    {
        cout<<"minimun is : "<<c;
    }
    else{
        cout<<"minimun is : "<<d;
    }
    return 0;
}