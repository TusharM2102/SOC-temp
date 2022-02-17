//question 3
#include<iostream>
using namespace std;

void multiply(int i1, int i2, int j2, double* ptr1, double* ptr2)
{
    double mat3[i1][j2];
    for(int i=0; i<i1; i++)
    {
        for(int j=0; j<j2; j++)
        {
            mat3[i][j] = 0;
            for(int k=0;k<i2; k++)
            {
                mat3[i][j] = mat3[i][j] + *(ptr1+i*i2+k)*(*(ptr2+k*j2+j));
            }
            cout<<mat3[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int i1,i2,j1,j2;
    cout<<"enter size of first matrix"<<endl;
    cin>>i1>>j1;
    double mat1[i1][j1];
    cout<<"enter it's elemts"<<endl;
    for(int i=0; i<i1; i++)
    {
        for(int j=0; j<j1; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"enter size of second matrix"<<endl;
    cin>>i2>>j2;
    double mat2[i2][j2];
    cout<<"enter it's elements"<<endl;
    for(int i=0; i<i2; i++)
    {
        for(int j=0; j<j2; j++)
        {
            cin>>mat2[i][j];
        }
    }
    double* ptr1 = &mat1[0][0];
    double* ptr2 = &mat2[0][0];
    if(j1 == i2)
    multiply(i1, i2, j2, ptr1, ptr2);
    else
    cout<<"Multiplication not possible";
    return 0;
}