#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Elements of Array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int left = 0, right = n - 1;

    while(left < right)
    {
        while(arr[left] == 0 && left < right)
        {
            left++;
        }

        while(arr[right] == 1 && left < right)
        {
            right--;
        }

        if(left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    cout<<"Segregated array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}