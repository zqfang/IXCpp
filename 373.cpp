#include <iostream>
using namespace std;
class CBase
{
private:
	int Number;
public:
	CBase(int x):Number(x)
	{}
	void display()
	{
		cout << "Number = " << Number << endl;
	}
};
class CPri : public CBase
{
private:
	int Number2;
public:
	CPri(int x, int y = 0) : CBase(x)
	{
		Number2 = y;
	}
	void display()
	{
		cout << "Number2 = " << Number2 << endl; CBase::display();
	}
};
int main373()
{
	CPri obj(8, 12);
	obj.display();
	return 0;
}