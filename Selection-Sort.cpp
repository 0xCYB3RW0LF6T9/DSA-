#include <iostream>
using namespace std;
void Selection_Sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int min_val = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_val] > a[j])
            {
                min_val = j;
            }
        }
        swap(a[i], a[min_val]);
    }
}

void show(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}


int main()
{

int a[100];
int l,i;

cout<<"Enetr your array limit = ";
 cin>>l;
 cout<<"Enetr array element = ";
 for (int i = 0; i < l; i++)
 {
    cin>>a[i];
 }
 
show(a,l);
cout<<"\n";
Selection_Sort(a,l);
show(a,l);



}