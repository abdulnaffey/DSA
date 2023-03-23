#include "List.h"
List::List( int max)
{
	arr = new int[max];
	
	maxSize = max;
	currentSize = 0;
}
List::List()
{
	arr = nullptr;
	maxSize = 0;
	currentSize = 0;

}
List::List(const List& obj)
{
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
	arr = new int[maxSize];
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}
void List::setArr(int* ar, int ma, int cur)
{
	maxSize =ma;
	currentSize = cur;
	arr = new int[maxSize];
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = ar[i];
	}
}

int* List::getArr()
{
	int* t;
	t = new int[maxSize];
	for (int i = 0; i < currentSize; i++)
	{
		t[i] = arr[i];
	}
	return t;
}
int List::getMaxSize()
{
	return maxSize;
}
int List::getCurrentSize()
{
	return currentSize;
}
List::~List()
{
	delete[] arr;
	arr = nullptr;
}