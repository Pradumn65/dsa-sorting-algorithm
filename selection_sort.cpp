
#include<iostream>
using namespace std;

void selectionsort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }

        }
        swap(arr[i],arr[minindex]);
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
  
int main()
{
    int arr[1000];
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr,n);
    print(arr,n);
    return 0;
}