#pragma once

#include <string>
#include <vector>

//file manager
class File { 
public:
	File();
	virtual ~File();
	//Input 2d Array 
	//Pre: file name, data[x][y]
	int InputFileArray2D(const std::string input_file_name, int data[100][100]);
	//Input Array
	//Pre: file name, data[]
	int InputFileArray(const std::string input_file_name, int data[100]);
};