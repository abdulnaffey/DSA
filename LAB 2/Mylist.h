#pragma once
#include "List.h"
using namespace std;
class MyList : public List
{
public:
	MyList();
	MyList( int max);
	MyList(const MyList& obj);
	~MyList();
	

	bool empty();
	bool full();
	int size();
	bool insertAt(int ind, int val);
	int last();
	bool search(int);
	
	virtual void addElementAtFirstIndex(int);
	virtual void addElementAtLastIndex(int);
	virtual void removeElementFromEnd();
	virtual void removeElementFromStart();
};

