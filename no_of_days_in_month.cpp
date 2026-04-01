#include<iostream>
using namespace std;

int main()
{
    int day, month , year;
    cout<<"Enter day , month , year: ";
    cin>>day>>month>>year;

    if((month==1)||(month==3)||(month==5)||(month==7)||(month==9)||(month==11))
    {
        cout<<"31 days in month ";
    }
    else if((month==4)||(month==6)||(month==8)||(month==10)||(month==12))
    {
        cout<<"30 days in month ";
    }
    else if(month==2)
    {
        if((year%400==0) && (year % 4 == 0 )&& (year % 100 != 0))
        {
            cout<<"29 days in month ";
        }
        else{
            cout<<"28 days ";
        }
    }
    return 0;
}