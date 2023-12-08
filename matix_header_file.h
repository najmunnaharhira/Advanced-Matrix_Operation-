// matrix_header_file
#include<bits/stdc++.h>

#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H
#include <vector>

using namespace std;

int add(int m, int n);
int subtract(int m, int n);
int multiply(int m, int n);
std::vector<std::vector<int>> createMatrixWithInput(int rows, int cols) ;
std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2);
std::vector<std::vector<int>> subtractMatrices(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2);
std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2);

std::vector<std::vector<double>> createRowReductionMatrix(int var);
std::vector<double> rowReductionSolve(std::vector<std::vector<double>>& augmentedMatrix);
void displayRowReductionSolve(const std::vector<double>& solution);

std::vector<std::vector<double>> createMatrixForInverseOrDet(int var);
std::vector<std::vector<double>> findMatrixInverse(std::vector<std::vector<double>>& matrix);

double findMatrixDeterminant(std::vector<std::vector<double>>& matrix);

void displayMatrix(const std::vector<std::vector<int>>& matrix) ;


#endif // MATRIX_OPERATIONS_H
