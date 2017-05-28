// Naresh 106116103
#include<iostream>
#include<vector>
using namespace std;

 
int main()
{
    int n,i,j,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: \n"; 
    vector<int>a(n);
    for(int a_i=0;a_i<n;a_i++)
        cin>>a[a_i];
        
    for(i=1;i<n;i++)
    {
        for(int a_j=0;a_j<(n-i);a_j++)
            if(a[a_j]>a[a_j+1])
            {
                temp=a[a_j];
                a[a_j]=a[a_j+1];
                a[a_j+1]=temp;
            }
    }
    
    cout<<"Array after bubble sort: ";
    for(int a_i=0;a_i<n;a_i++)
        cout<<a[a_i]<<" ";
        
    return 0;
}
