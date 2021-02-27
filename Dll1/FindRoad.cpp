#include "FindRoad.h"

#include <math.h>
#include <float.h>

void Point::FindRoad(int n, Point* points, int* road)
{
	double minDistance = DBL_MAX;

	for (int i = 0; i < n - 1; i++)
	{
		double distance = sqrt(0
			+ pow(points[i + 1].getX() - points[i].getX(), 2.0)
			+ pow(points[i + 1].getY() - points[i].getX(), 2.0));


			road[i] = j;
	}
}