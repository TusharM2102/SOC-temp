//question 2
#include<iostream>
using namespace std;

int main()
{
    int n;
    int sales[4][5];
    for(int i =0; i<4; i++)
    {
        for(int j =0; j<5; j++)
        {
            cout<<"The value of product "<<j+1<<" sold by salesperson "<<i+1<<" is: "<<endl;
            cin>>n;
            sales[i][j] = n;
        }
    }
    return 0;
}