#include"Mylist.h"
MyList::MyList() 
{

}
MyList::MyList(int max) : List(max)
{

}
MyList::MyList(const MyList & obj) : List(obj)
{

}
MyList::~MyList()
{

}


bool MyList::empty()
{
	if (getCurrentSize() == 0)
	{
		return 0;
	}
	return 1;
}
bool MyList::full()
{
	if (getCurrentSize() == getMaxSize())
	{
		return 1;
	}
	return 0;
}
int  MyList::size()
{
	return getCurrentSize();
}
bool MyList::insertAt(int ind, int val)
{
	int* t;
	t = getArr();
	if (ind <= getCurrentSize())
	{
		t[ind] = val;
		return 1;
	}
	else
		return 0;
}
int  MyList::last()
{
	int* t;
	t = getArr();
	return t[getCurrentSize()];
}
bool MyList::search(int val)
{
	int* t;
	t = getArr();
	for (int i = 0; i < getCurrentSize(); i++)
	{
		if (val == t[i])
		{
			return 1;
		}
	}
	return 0;
}

void MyList::addElementAtFirstIndex(int val)
{
	int* t;
	t = getArr();
	t[0] = val;
	setArr(t, getCurrentSize(), getMaxSize());
}
void MyList::addElementAtLastIndex(int val)
{
	int* t;
	t = getArr();
	int last = getCurrentSize();
	t[last] = val;
	setArr(t, getCurrentSize(), getMaxSize());
}
void MyList::removeElementFromEnd()
{
	int* t;
	t = getArr();
	int last = getCurrentSize()-1;
	setArr(t, last, getMaxSize());
}
void MyList::removeElementFromStart()
{
	int* t;
	t = getArr();

	int last = getCurrentSize() ;
	for (int i = 0; i < last-1; i++)
	{
		t[i] = t[i + 1];
	}
	last -= 1;
	setArr(t, last, getMaxSize());
}