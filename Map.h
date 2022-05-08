#pragma once

#include <vector>

class Map
{
private:

public:
	Map(const int data[100][100]);
	virtual ~Map();

	void updata();
	void render();

};
