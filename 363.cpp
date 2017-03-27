#include <iostream>
class MyFileCalss
{
private:
	char filename[64];
	char *contex;
	int FileLength;
public:
	MyFileCalss()
	{
		filename[0] = NULL;
		contex = NULL;
		FileLength = 0;
	}
	~MyFileCalss()
	{
		if (FileLength)
		    delete[] contex;
	}
	void OpenFile(char *str, int len)
	{
		for (int i = 0; i < len; i++)
		{
			filename[i] = str[i];
		}
		filename[len] = 0;
		FileLength = 0;
		if (contex)
		{
			delete[] contex;
			contex = NULL;
		}
	}
	void WriteFile(char* str, int len)
	{
		if (contex != NULL)
		{
			delete contex;
			contex = new char[len + 1];
			for (int i = 0; i < len; i++)
			{
				contex[i] = str[i];
			}
			contex[len] = 0;
			FileLength = len;

		}

	}
	void CopyFile(MyFileCalss &file)
	{
		WriteFile(file.contex,file.FileLength);
	}
	void display()
	{
		std::cout << contex << std::endl;
	}

};
int main363()
{
	MyFileCalss file1, file2;
	file1.OpenFile("txt1", 4);
	file2.OpenFile("txt2", 4);
	file1.WriteFile("hello!", 6);
	file2.CopyFile(file1);
	file1.display();
	file2.display();
	return 0;
}