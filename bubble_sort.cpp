
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
     
    for(int i=1;i<size;i++)
    {
        bool arrswap=false;
        
        for(int j=0;j<size-i;j++)
        {   
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                arrswap=true;
            }
            
        }
        if(arrswap==false)
        {
            break;
        }

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

    bubble_sort(arr,n);
    print(arr,n);   
    return 0;
}