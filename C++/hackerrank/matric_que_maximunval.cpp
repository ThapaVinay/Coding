#include<iostream>
using namespace std;
int main()
{
    long n,m,max;
    cin>>n>>m;
    int arr[n],input[3];
    for(int i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>input[j];
        }
        for(int j=input[0]-1;j<input[1];j++)
        {
            arr[j]=arr[j]+input[2];
        }
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}