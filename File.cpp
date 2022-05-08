
#include "File.h"
#include <iostream>
#include <fstream>

using namespace std;

File::File()
{

}

File::~File()
{

}

int File::InputFileArray2D(const string input_file_name,int data[100][100])
{
	ifstream ifs(input_file_name, ios::in);

	int x = 0, y = 0;
	int input = 0;
	char c = 0;

	if (!ifs) {
		cerr << "file not found" << endl;
		return 1;
	}
	while (!ifs.eof())
	{
		ifs.get(c); 
		if (c != ',' && c != '\n') { 
			input = atoi((const char*)&c); 
			data[x][y] = input;
		}
		else if (c == ',')
		{
			x++; //if "," x++
		}
		else if (c == '\n') {
			x = 0;
			y++; //if " " y++
		}
	
	}

	return 0;
}

int File::InputFileArray(const string input_file_name, int data[100])
{
	ifstream ifs(input_file_name, ios::in);

	int x = 0;
	int input = 0;
	char c = 0;

	if (!ifs) {
		cerr << "file not found" << endl;
		return 1;
	}
	while (!ifs.eof())
	{
		ifs.get(c);
		if (c != ',') {
			input = atoi((const char*)&c);
			data[x] = input;
		}
		else if ( c == ',') {
			x++;
		}

	}
	return 0;
}