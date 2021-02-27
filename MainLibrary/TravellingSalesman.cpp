#include "pch.h"

double getDistance(Point a, Point b)
{
	return sqrt(0
		+ pow(b.getX() - a.getX(), 2.0)
		+ pow(b.getY() - a.getX(), 2.0));
}

void findRoad(int n, Point* points, int* road)
{
	int firstPointIndex = 0;

	road[firstPointIndex] = 0;
	points[firstPointIndex].visit();

	int index = 0;

	for (int counter = 1; counter < n; counter++)
	{
		double minDistance = DBL_MAX;

		for (int j = 0; j < n; j++)
		{
			if (index == j) continue;

			double distance = getDistance(points[index], points[j]);

			if (true
				&& !points[j].isVisited()
				&& distance < minDistance)
			{
				minDistance = distance;
				index = j;
			}
		}

		road[counter] = index;
		points[index].visit();
	}
}