#include "Mylist.h"
int main()
{
	int ar[8] = { 4,6,8,60 };
	MyList m1(5),m2;
	m2.setArr(ar, 4, 8);
	if (m2.empty() == 0)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "yes" << endl;
	}
}