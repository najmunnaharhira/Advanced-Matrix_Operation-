/* C++ program to multiply matrices */
#include <iostream>
using namespace std;

int main()
{
int m, n, p, q, c, d, k, sum = 0;
int mat1[10][10], mat2[10][10], mat3[10][10];

cout << “Enter number of rows and columns of matrix1\n”;
cin >> m >> n;
cout << “Enter elements of matrix 1\n”;

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
cin >> mat1[c][d];

cout << “\nEnter number of rows and columns of matrix2\n”;
cin >> p >> q;

if (n != p)
cout << “\nThe matrices can’t be multiplied with each other.\n”;
else
{
cout << “\nEnter elements of matrix2\n”;

for (c = 0; c < p; c++)
for (d = 0; d < q; d++)
cin >> mat2[c][d];

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++) {
for (k = 0; k < p; k++) {
sum = sum + mat1[c][k]*mat2[k][d];
}

mat3[c][d] = sum;
sum = 0;
}
}

cout << “\nProduct of the matrices:\n”;

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++)
cout << mat3[c][d] << ” “;

cout << endl;
}
}

return 0;
}
