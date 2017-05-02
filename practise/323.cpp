#include <iostream>
#include <cmath>
class CPoint
{
public:
	CPoint(int i = 0, int j = 0)
	{
		x = i;
		y = j;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
private:
	int x, y;
};
class CRectangle
{
public:
	CRectangle(int left, int right, int top, int bottom) :point1(left, right),point2(top, bottom)
	{};
	int getArea()
	{
		int width = point1.GetX() - point2.GetX();
		int height = point1.GetY() - point2.GetY();
		return (width*height) ? width*height : -width*height;
	}
	int GetGirth()
	{
		int width = abs(point1.GetX() - point2.GetY());
		int height = abs(point1.GetY() - point2.GetY());
		return 2 * (width + height);

	}
private:
	CPoint point1;
	CPoint point2;

};
int main323()
{
	CRectangle rect(5, 2, 13, 18);
	std::cout << rect.getArea() << std::endl;
	std::cout << rect.GetGirth() << std::endl;
	return 0;
}