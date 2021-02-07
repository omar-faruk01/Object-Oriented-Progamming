#include "lineType.h"
#pragma once


float lineType::isSlope()
{
	float slope;
	slope = (((p2.getY() - p1.getY()) / (p2.getX() - p1.getX())));
	return slope;
}

float lineType::isLine()
{
	if (p1.getX() == p2.getX())
	{
		return 1;
	}
	if (p1.getY() == p2.getY())
	{
		return 2;
	}
	if (p1.getY() != p2.getY() && p1.getX() != p2.getX())
	{
		return 3;
	}
}

float lineType::isVertical()
{
	 return p1.getX();
}

float lineType::isHorizontal()
{
	return  p1.getY();
}

float lineType::isSlant()
{
	float b;
	b = p1.getY() - (lineType::isSlope() * (p1.getX()));
	return b;
}

lineType::lineType(pointType c, pointType d)
{
	p1 = c;
	p2 = d;
}

