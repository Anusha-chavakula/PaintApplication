#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;

class Circle : public Shape
{
private:
	int radius;
public:
	
	
	Circle(int r)
	{
		id = 3;
		xcoordinate = 0;
		ycoordinate = 0;
		radius = r;
	}
	void display()
	{
		cout << "id: " << id << " Name: Circle X-Coordinate: " << xcoordinate << " Y-Coordinate: " << ycoordinate << " Radius: " << radius<<"\n";
	}


};

