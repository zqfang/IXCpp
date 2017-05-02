#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void main43()
{
	char ch;
	fstream infile, outfile;
	infile.open("out1.txt", ios::in);
	if (!infile)
	{
		cout << "out1.txt could not be opened" << endl;
		abort();

	}
	outfile.open("out.txt", ios_base::out);
	if (!outfile)
	{
		cout << "out.file not exist" << endl;
		abort();
	}
	while (infile.get(ch))
	{
		cout << ch;
		outfile << ch;

	}
	cout << endl;
	infile.close();
	outfile.close();


}