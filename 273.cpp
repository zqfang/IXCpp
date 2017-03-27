#include <iostream>
class baseA
{
	int a;
public:
	baseA(int m) { a = m; }
	int geta() { return a; }
};
class priA1 : public baseA
{
	int b;
public:
	priA1(int m,int n):baseA(n),b(m){}
	int getb() { return b; }

};
class priA2 : public priA1
{
	int c;
public:
	priA2(int m, int n, int k) :priA1(n, k), c(m) {}
	void show()
	{
		std::cout << c << std::endl;
	}
};
void main273()
{
	priA2 a(7, 5, 10);
	std::cout << a.geta() << std::endl;
	std::cout << a.getb() << std::endl;
	a.show();

}