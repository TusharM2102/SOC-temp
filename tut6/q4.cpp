//question 4

#include<iostream>
#include<cmath>
using namespace std;

int determinant( int mat[4][4], int n)
{
    int det = 0;
    int minor[4][4];
    for (int x = 0; x < n; x++) 
    {
        int subi = 0;
        for (int i = 1; i < n; i++) 
        {
            int subj = 0;
            for (int j = 0; j < n; j++) 
            {
                if (j == x)
                continue;
                minor[subi][subj] = mat[i][j];
                subj++;
            }
        subi++;
        }
    det = det + (pow(-1, x) * mat[0][x] * determinant( minor, n - 1 ));
 }
 return det;
}
int main() 
{
    int n=4;
    int mat[4][4];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }    
cout<<"Determinant of the matrix :"<< 
determinant(mat, n);
return 0;
}