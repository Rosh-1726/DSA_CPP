#include<iostream>
#include<algorithm>  // for sort
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int l = 0, r = n-1;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main()
{
    int target, num;

    cout<<"Enter the Target: ";
    cin>>target;

    cout<<"Enter the size of the Array: ";
    cin>>num;

    int arr1[num];
    cout<<"Enter the Elements of Array: ";
    for(int i = 0; i < num; i++)
    {
        cin>>arr1[i];
    }

    sort(arr1, arr1 + num);  

    int result = binarySearch(arr1, num, target);

    cout<<"Result: "<<result;

    return 0;
}