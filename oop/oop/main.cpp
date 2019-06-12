#include <iostream>
#include "MyPoint.h"

void main()
{
	MyPoint* p1 = new MyPoint();
	MyPoint* p2 = new MyPoint();

	p1->SetX(1);
	p1->SetY(2);

	p2->SetX(5);
	p2->SetY(4);

	float ds;

	ds = p1->Distance(p2);

	cout << "Distance between p1 and p2: " << ds << endl;
	system("pause");
}