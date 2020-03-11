#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,p,temp,min,a[15];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                p=j;
            }
        }
 
        temp=a[i];
        a[i]=a[p];
        a[p]=temp;
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
