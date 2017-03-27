#include <iostream>
#include <cmath>

class Rectangle
{
public:
	int left, right, top, bottom;
	Rectangle(int l, int r,int t, int b)
	{
		left = l;
		right = r;
		top = t;
		bottom = b;
	}
	Rectangle( Rectangle &rc)
	{
		left = rc.left;
		right = rc.right;
		top = rc.top;
		bottom = rc.bottom;
	}
	float Diagnoal()
	{
		return sqrt(left*left + right*right);
	}
	int Girth()
	{
		return (left + right + top + bottom);
	}

};