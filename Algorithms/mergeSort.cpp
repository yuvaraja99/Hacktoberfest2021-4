#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int end,int mid,int ans[]){
    int i=start,j=mid+1,k=start;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
            ans[k]=arr[i];
            k++;i++;
        }
        else{
            ans[k]=arr[j];
            k++;j++;
        }
    }
    if(i>mid){
        while(j<=end){
            ans[k]=arr[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid){
            ans[k]=arr[i];
            k++;i++;
        }
    }
    for(k=start;k<=end;k++)
        arr[k]=ans[k];
    
}

void mergesort(int arr[],int start,int end){
    if(start>=end)
        return;
    
    int mid = (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    
    int ans[end+1];
    merge(arr,start,end,mid,ans);
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start=0,end=n-1;
    mergesort(arr,start,end);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
