#include<bits/stdc++.h>
using namespace std;
#define ll long long
void linearsearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"INDEX = "<<i+1<<endl;
            break;
        }
        if(i==n-1)
        {
            cout<<"TARGET NOT FOUND"<<endl;
        }
    }
}
int main()
{
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    linearsearch(arr,n,target);
    
}