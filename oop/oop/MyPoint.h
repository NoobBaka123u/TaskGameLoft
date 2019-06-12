#pragma once
using namespace std;

class MyPoint
{
private:
	int mPosX;
	int mPosY;

public:
	MyPoint(); //default constructor 
	MyPoint(int, int); //constructor 
	~MyPoint();
	void Display(); //print value of mPosX and mPosY 
	void SetX(int); //set new value for X  
	int GetX(); //return value of X  
	void SetY(int); //set new value for Y - 
	int GetY(); //return value of Y 
	float Distance(MyPoint* p); //return distance between current point and p
};