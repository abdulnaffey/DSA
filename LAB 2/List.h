#pragma once
#include<iostream>
using namespace std;
class List
{
	int* arr;
	int maxSize;
	int currentSize;
public:
	void setArr(int *ar,int ma,int cur);
	int* getArr();
	int getMaxSize();
	int getCurrentSize();
	List();
	List(int max);
	List(const List& obj);
	virtual ~List() ;
	virtual void addElementAtFirstIndex(int) = 0;
	virtual void addElementAtLastIndex(int) = 0;
	virtual void removeElementFromEnd() = 0;
	virtual void removeElementFromStart() = 0;
};


