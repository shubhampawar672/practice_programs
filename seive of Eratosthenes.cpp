#include <iostream>
#include<stdlib.h>
#include<cmath>
//Sieve of Eratosthenes algorithm to find all prime numbers up-to n

using namespace std;

 void primenum(int n)
 {
     int *arr=new int[n+1];
     for(int i=0;i<n;i++)
     {
         arr[i]=1;
     }
   arr[0]=0;
     arr[1]=0;
     for(int i=2;i<=sqrt(n);i++)
     {
         if(arr[i]==1)
         {
             for(int j=2;i*j<=n;j++)
             {
                 arr[i*j]=0;
             }
         }
     }
     cout<<"prime numbers between 1 to "<<n<<" are :\n";
     for(int i=0;i<n;i++)
     {   if(arr[i])
         cout<<i<<"  ";
     }
 }
int main()
{   int x;
cout<<"enter number \n";
cin>>x;
     primenum(x);
    return 0;
}
