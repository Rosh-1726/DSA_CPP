#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key) return i+1;
    }
    return -1;
}
int main()
{
    int target , num;
    cout<<"enter the Target: ";
    cin>>target;

    cout<<"Enter the size of the Array: ";
    cin>>num;

    int arr1[num];
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
    int result = linearSearch(arr1,num, target);
    cout<<"Result : "<<result;

    return 0;
}