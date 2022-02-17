//question 5
#include<iostream>
using namespace std;

void reverse(char* ptr, int l)
{
    char str[l];
    for(int i=0; i<l; i++)
    {
        str[i] = *(ptr-i+l-1);
        cout<<str[i];
    }
}
int main()
{
    string s;
    cout<<"Enter the string "<<endl;
    getline(cin,s);
    int l = s.length();
    char arr[l];
    for(int i = 0; i<l; i++)
    {
        arr[i] = s[i];
    }
    char* ptr = arr;
    reverse(ptr,l);
    return 0;
}