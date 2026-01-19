// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sorting(int a[],int size)
{
    for(int i =0;i<size;i++)
    {   for(int j=0; j<size-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

    }

}
void show(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";

    }

}
int binarySearch(int a[],int size,int val)
{
    int low=0;
    int high=size-1;

    while(low<=high)
    {   int mid=(low+high)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        if(a[mid]<val)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }

  }
  return -1;
}


int main() {
   int a[100];
   int i , size,target;
   cout<<"Enter your arrray size = ";
   cin>>size;
   cout<<"Enetr your target value = ";
   cin>>target;
   for(int i =0;i<size;i++)
   {
       cin>>a[i];
   }
   show(a,size);
   cout<<"\n";
   sorting(a,size);
   show(a,size);
   cout<<"\n";

   int x= binarySearch(a,size,target);
   cout<<"Value found at index = "<<x<<endl;

    return 0;
}
