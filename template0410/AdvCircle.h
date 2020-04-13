#pragma once
#include "Point.h"

class AdvCircle
{
public:
	void setCircle(int _r, int _x0, int _y0);
	int judge(Point& myp);

private:
	int r;
	int x0;
	int y0;
};

