#pragma once

struct Point
{
private:
	double x;
	double y;

	bool visited;

public:

	double getX() { return this->x; }
	double getY() { return this->y; }

	bool isVisited() { return this->visited; }
	void visit() { visited = true; }

	Point() {}
	Point(double _x, double _y) : x(_x), y(_y), visited(false) { }
};