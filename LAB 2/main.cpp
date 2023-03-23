#include "Mylist.h"
int main()
{
	int ar[8] = { 4,6,8,60 };
	MyList m1(5),m2;
	m2.setArr(ar, 8,4);
	if (m2.empty() == 0)
	{
		cout << "Yes empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}
}