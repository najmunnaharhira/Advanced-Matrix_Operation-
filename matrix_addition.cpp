/* C++ Program to matrix operations ,matrix addition, matrix subtraction, matrix multiplication – addition */
#include
using namespace std;

int main()
{
//the main code for matrix addition
int m, n;
cin >> m >> n;
int i, j;
int mat1[m][n], mat2[m][n], mat3[m][n];
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
cin >> mat1[i][j];
}
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
cin >> mat2[i][j];
}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
cout << mat3[i][j] << ” “;
cout << endl;
}

return 0;
}
