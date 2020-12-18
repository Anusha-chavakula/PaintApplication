#include<iostream>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Shape.h"
using namespace std;

int main()
{
    int id;
    do
    {
    cout << "Types of Shapes\n1.Square\n2.Rectangle\n3.Circle\n";
    cout << "Enter id of the shape you want\n";
    cin >> id;
    
        if (id == 1)
        {
            int side;
            cout << "Enter side of a square\n";
            cin >> side;
            Square s(side);
            s.display();
        }
        else if (id == 2)
        {
            int l, b;
            cout << "Enter length and breadth of a rectangle\n ";
            cin >> l >> b;
            Rectangle r(l, b);
            r.display();
        }
        else if (id == 3)
        {
            int radius;
            cout << "Enter radius of a circle\n";
            cin >> radius;
            Circle c(radius);
            c.display();
        }
    } while (id<4);


    
}

