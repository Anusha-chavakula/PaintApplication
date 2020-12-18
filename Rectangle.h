#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;
class Rectangle : public Shape
{
private:
	int length, breadth;
public:
	
	Rectangle(int l, int b)
	{
		id = 2;
		xcoordinate = 0;
		ycoordinate = 0;
		length = l;
		breadth =b;
		
	}
	void display()
	{
		cout << "id: " << id << " Name: Rectangle X-Coordinate: " << xcoordinate << " Y-Coordinate: " << ycoordinate<<" Length: "<<length<<" Breadth: "<<breadth<<endl;
	}
};

