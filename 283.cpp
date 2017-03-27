#include <iostream>

class objA1;
class objA0
{
private:
	static int m_A0;
	friend int func( objA1 &obj);

};
int objA0::m_A0 = 10;

class objA1
{
private:
	int m_A1;
	friend int func(objA1 &obj);
public:
	objA1(int i)
	{
		m_A1 = i;
	}

};
int func(objA1 & obj)
{
	return obj.m_A1 * objA0::m_A0;
}

int main283()
{
	objA1 obj0(10);
	std::cout << func(obj0) << std::endl;
	return 0;
}