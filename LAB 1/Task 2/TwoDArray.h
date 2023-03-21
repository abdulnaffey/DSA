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
	void readFile()
	{
		bool filecheck = 0;
		string* file_name;
		file_name = new string;
		cout << "Enter File name with extension. :";
		cin >> *file_name;
		ifstream read;
		while (filecheck == 0)
		{

			read.open(*file_name);
			if (!read)
			{
				cout << "FILE NOT FOUND !\n";
				cout << "ENTER AGAIN !\n ";
				cout << "Enter File name with extension. :";
				cin >> *file_name;
			}
			else
			{

				row = new int;
				*row = 0;

				col = new int;
				*col = 0;
				filecheck = 1;
				char help[30] = { '\0' };


				char* num_get;

				bool hehe = 0;
				while (!read.eof())
				{
					read.getline(help, 30);

					*row = *row + 1;

					if (hehe == 0)
					{
						num_get = strtok(help, " ");
						while (num_get)
						{
							*col = *col + 1;
							num_get = strtok(NULL, " ");
						}hehe = 1;
					}

				}
				memset(&help[0], '\0', sizeof(help));
				read.close();
				matrix = new int* [*row];
				for (int i = 0; i < *row; i++)
				{
					*(matrix + i) = new int[*col];
				}

				read.open(*file_name);
				for (int i = 0; i < *row; i++)
				{
					read.getline(help, 30);

					int j = 0;
					num_get = strtok(help, " ");
					while (num_get)
					{
						*(*(matrix + i) + j++) = atoi(num_get);
						num_get = strtok(NULL, " ");
					}
					j = 0; memset(&help[0], '\0', sizeof(help));
				}
				read.close();
				
			}
		}
	}
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

