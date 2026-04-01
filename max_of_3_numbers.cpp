#include<iostream>
using namespace std;

int main ()
{
    int a,b,c;
    cout<<"Enter the 3 value: ";
    cin>>a>>b>>c;

     if(a>b && a>c){cout<<"maximum no is : "<<a;}
    else if(b>a && b>c){cout<<"maximum no is : "<<b;}
    else{cout<<"maximum no is : "<<c;}   
    
    return 0;
}