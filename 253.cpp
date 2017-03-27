#include <iostream>

class TestClass
{
	static int m_Number;
	int m_Other;
public:
	TestClass(int i)
	{
		m_Other = i;
	}
	static int get(TestClass * obj) {
		return m_Number + obj->m_Other;
	}

};
int TestClass::m_Number = 10;

int main253()
{
	TestClass obj(11);
	std::cout<<obj.get(&obj)<<std::endl;
	return 0;
}