#include <iostream>
//Recursive Quick sort using first element as pivote
using namespace std;
void quicksort(int [],int,int);
int Partition(int [],int ,int);
int main()
{
   int arr[]={2,1,5,4,6,30,22,11,43,54,27,65,68,98,70,7564,1223,100,1002,200,199};
   int n=sizeof(arr)/sizeof(arr[0]);
   quicksort(arr,0,n);
   for(int i=0;i<n;i++)
   {

       cout<<arr[i]<<" ";
   }

    return 0;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
    int j=Partition(arr,l,h);
    quicksort(arr,l,j);
    quicksort(arr,j+1,h);
    }

}
int Partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j)
    {

        do
        {
            i++;
        }while(pivot>=arr[i]);
        do
        {
            j--;
        }while(arr[j]>pivot);
       if(i<j)
        {
           swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
