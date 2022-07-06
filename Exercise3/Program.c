#include<stdio.h>
#include<math.h>
#include "TwoDimensionalCoordinates.h"

TwoDCords GetFarthesetPointFromOrigin(TwoDCords point1, TwoDCords point2);
int GetDistanceFromOrigin(TwoDCords point);

int main()
{
	TwoDCords point1;
	point1.x = 5;
	point1.y = 0;
	TwoDCords point2;
	point2.x = 2;
	point2.y = 15;
	TwoDCords farthestPoint = GetFarthesetPointFromOrigin(point1, point2);
	printf("x: %d, y: %d", farthestPoint.x, farthestPoint.y);
}

TwoDCords GetFarthesetPointFromOrigin(TwoDCords point1, TwoDCords point2)
{
	int point1Distance = GetDistanceFromOrigin(point1);
	int point2Distance = GetDistanceFromOrigin(point2);

	if (point1Distance > point2Distance)
	{
		return point1;
	}

	return point2;
}

int GetDistanceFromOrigin(TwoDCords point)
{
	int distance = pow(point.x, 2) + pow(point.y, 2);

	return distance;
}