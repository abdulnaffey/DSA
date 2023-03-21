#include"TwoDArray.h"
int main()
{
	TwoDArray T1(4, 4), T2;
	T2.input(4, 4);
	T1.addValue(8);
	T2.addValue(3);
	
	T1.display();
	cout << endl;
	T2.display();
	cout << endl;
	T1+T2;
	cout << endl;
	T1 - T2;
	cout << endl;
	T1 * T2;
	cout << endl;
	TwoDArray T3;
	T3.readFile();
	T3.display();

}