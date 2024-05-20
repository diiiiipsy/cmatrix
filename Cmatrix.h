#pragma once


class Cmatrix
{
private:
	int** matrix;
	int row_num;
	int col_num;

public:
	Cmatrix():row_num(0),col_num(0){};
	Cmatrix(int init_row_num, int init_col_num) :
		row_num(init_row_num), col_num(init_col_num)
	{
		for (int i = 0; i < row_num; i++)
			for (int j = 0; j < col_num; j++)
				matrix[i][j] = 0;
	};
	void adjust(int row, int col, int after_change);
	int get(int row, int col)const;
	void print();
};

