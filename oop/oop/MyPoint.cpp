#include "MyPoint.h"
#include <iostream>

MyPoint::MyPoint()
{
	this->mPosX = 0;
	this->mPosY = 0;
}

MyPoint::MyPoint(int x, int y)
{
	this->mPosX = x;
	this->mPosY = y;
}

MyPoint::~MyPoint()
{
	cout << "Destroy!!";
}

void MyPoint::Display() 
{
	cout << "X = " << this->mPosX << endl;
	cout << "Y = " << this->mPosY << endl;
}

void MyPoint::SetX(int x)
{
	this->mPosX = x;
}

int MyPoint::GetX()
{
	return this->mPosX;
}


void MyPoint::SetY(int y)
{
	this->mPosY = y;
}

int MyPoint::GetY()
{
	return this->mPosY;
}

float MyPoint::Distance(MyPoint* p)
{
	int dx = this->mPosX - p->GetX();
	int dy = this->mPosY - p->GetY();
	float ds = (float)sqrt(dx*dx + dy*dy);
	return ds;
}