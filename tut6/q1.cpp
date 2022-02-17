//question 1
#include<iostream>
using namespace std;

int* search(int a, int* ptr, int n)
{
    for(int i =0; i<n; i++)
    {
    if(a == *(ptr+i))
    return ptr + i;
    }
    return NULL;
}
int main()
{
    int n,a;
    cout<<"Enter number of terms in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in the array"<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<"Enter the number to be searched"<<endl;
    cin>>a;
    int* ptr = arr;
    cout<<search(a, ptr,n);
    return 0;
}