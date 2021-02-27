#pragma once

#include <iostream>
#include <math.h>
#include <float.h>
#include <stdlib.h>
#include <time.h>
#include "Point.h"

#ifdef TRAVELLINGSALESMAN_EXPORTS
#define TRAVELLINGSALESMAN_API __declspec(dllexport)
#else
#define TRAVELLINGSALESMAN_API __declspec(dllimport)
#endif

extern "C" TRAVELLINGSALESMAN_API void findRoad(int n, Point* points, int* road);
