#include <iostream>
//to find the max sum of non adjacent element in an array
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"0\n";
        return 0;
    }
       int *arr=new int[n];
    if(n==1)
    {
        cout<<arr[0];
        return 0;
    }

    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int *dp=new int[n];
    dp[0]=arr[0];
    dp[1]=arr[1];
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        dp[i]=max(dp[i],arr[i]);
    }
    cout<<"max sum of non adjacent elements in the array is :"<<dp[n-1];
    return 0;
}
