#include<iostream>
using namespace std;

int main ()
{
    int n ,target;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are: ";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<" , ";
    }
    cout<<endl<<"Enter the target: ";
    cin>>target;

    int left = 0;
    int right = n-1;

    while(left<right)
    {
        int sum = arr[left]+arr[right];
        if(target ==sum)
        {
            cout<<"pair Found : "<<arr[left]<<" and "<<arr[right]<<endl;
            break;
        }
        else if(sum > target)
        {
            right--;
        }
        else{
            left++;
        }
    }


    return 0;
    
}