#include <iostream>
//buying and selling stock for max profit

using namespace std;

int main()
{
    int n,buy=0,sell=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_profit=INT_MAX;
    int profit=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max_profit)
        {
            max_profit=arr[i];
            buy=i;
        }
        if(arr[i]-max_profit>profit)
        {
            profit=arr[i]-max_profit;
            sell=i;
        }
    }
    cout<<profit<<"\n";
    cout<<"buy on day "<<buy;
    cout<<"\nSell on day "<<sell;
    return 0;
}
