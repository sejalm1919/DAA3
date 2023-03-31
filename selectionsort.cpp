#include<bits/stdc++.h>
using namespace std;
#define ll long long
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[index],arr[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selectionsort(arr,n);
    cout<<"SELECTION SORT : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}