#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <fstream>
using namespace std;
struct TwoDArray
{
private:
	int* row;
	int* col;
	int** matrix;

public:
	
	TwoDArray()
	{
		row = nullptr;
		col = nullptr;
		matrix = nullptr;
	}
	TwoDArray(int ro, int co)
	{
		matrix = new int* [ro];
		for (int i = 0; i < ro; i++)
		{
			*(matrix + i) = new int[co];
		}
		row = new int;
		*row = ro;
		col = new int;
		*col = co;
	}
	void operator + (const TwoDArray&obj)
	{
		if (*col == *obj.col && *row == *obj.row)
		{
			for (int i = 0; i < *row; i++)
			{
				for (int j = 0; j < *col; j++)
				{
					cout << *(*(matrix + i) + j) + *(*(obj.matrix + i) + j) << "\t";
				}
				cout << endl;
			}
		}
	}
	void operator - (const TwoDArray& obj)
	{
		if (*col == *obj.col && *row == *obj.row)
		{
			for (int i = 0; i < *row; i++)
			{
				for (int j = 0; j < *col; j++)
				{
					cout << *(*(matrix + i) + j) - *(*(obj.matrix + i) + j) << "\t";
				}
				cout << endl;
			}
		}
	}
	void input(int ro, int co)
	{
		matrix = new int* [ro];
		for (int i = 0; i < ro; i++)
		{
			*(matrix + i) = new int[co];
		}
		row = new int;
		*row = ro;
		col = new int;
		*col = co;
	}
	void display()
	{
		for (int i = 0; i < *row; i++)
		{
			
			for (int j = 0; j < *col; j++)
			{
				cout << " " << *(*(matrix + i) + j) << "\t";
			}
			cout << endl;
		}
	}
	void addValue(int val)
	{
		for (int i = 0; i < *row; i++)
		{
			for (int j = 0; j < *col; j++)
			{
				*(*(matrix + i) + j) =val;
			}
		}

	}
	void operator * (const TwoDArray& obj)
	{
		if (*col == *obj.col && *row == *obj.row)
		{
			for (int i = 0; i < *row; i++)
			{
				for (int j = 0; j < *col; j++)
				{
					cout << *(*(matrix + i) + j) * *(*(obj.matrix + i) + j) << "\t";
				}
				cout << endl;
			}
		}
	}
};

