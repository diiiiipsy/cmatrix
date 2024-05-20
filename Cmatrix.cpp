#include "Cmatrix.h"
#include<iostream>


void Cmatrix::adjust(int row, int col, int after_change)
{
	matrix[row][col] = after_change;
	return;
}


int Cmatrix::get(int row, int col)const
{
	return matrix[row][col];
}


void Cmatrix::print()
{
	if (row_num == 0 || col_num == 0)
	{
		std::cout << "empty matric" << std::endl;
		return;
	}
	for (int i = 0; i < row_num; i++)
	{
		for (int j = 0; j < col_num - 1; j++)
			std::cout << matrix[i][j] << ' ';
		std::cout << matrix[i][col_num - 1] << std::endl;
	}
	return;
}
