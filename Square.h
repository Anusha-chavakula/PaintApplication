#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;

class Square :public Shape
{
private:
	int side;
public:
	
	Square(int s)
	{
		id = 1;
		xcoordinate = 0;
		ycoordinate = 0;
		side = s;
		

	}
	void display()
	{
		cout << "id:" << id << " Name: Square X-Coordinate: " << xcoordinate << " Y-Coordinate: " << ycoordinate<<" Side: "<<side<<endl;
	}
};

