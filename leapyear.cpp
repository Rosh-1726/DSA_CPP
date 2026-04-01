#include<iostream>
using namespace std;

int main ()
{
    int year;
    cout<<"Enter the year to check whether it is leap year or not: ";
    cin>>year;

    if((year %400==0)&& (year %4==0)||(year %100!=0))
    {
        cout<<"Year : "<<year<<" is a Leap year";
    }
    else
    {
        cout<<"Year : "<<year<<" is not a Leap year";
    }
}