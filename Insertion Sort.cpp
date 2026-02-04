#include<iostream>
using namespace std;



void insertion(int a[], int n)
{

    for(int i=1; i<n; i++)
    {

        int cur=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>cur)
        {
            a[prev+1]=a[prev];
            prev-- ;
        }
        a[prev+1]=cur;


    }

}
void show(int a[] , int n)
{
    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" ";

    }

}
int main()
{

    int a[5]={32,5,46,7,87};
    int n=5;
    insertion(a,n);
    show(a,n);

}
