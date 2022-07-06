#include<stdio.h>
#include "Rectangle.h"

int main()
{

}

int GetRectangleArea(Rectangle rectangle)
{
	int width = rectangle.width;
	int height = rectangle.height;
	int area = (width * 2) + (height * 2);

	return area;
}

Rectangle GetMaxAreaRectangle(Rectangle rectangle1, Rectangle rectangle2)
{
	int rectangle1Area = GetRectangleArea(rectangle1);
	int rectangle2Area = GetRectangleArea(rectangle2);

	if (rectangle1Area > rectangle2Area)
	{
		return rectangle1;
	}

	return rectangle2;
}

int CanPlaceRectangleInsideAnother(Rectangle containerRectangle, Rectangle rectangleToPlaceInsideContainer)
{
	int containerRectangleArea = GetRectangleArea(containerRectangle);
	int rectangleToPlaceInsideContainerArea = GetRectangleArea(rectangleToPlaceInsideContainer);
	
	if (containerRectangleArea > rectangleToPlaceInsideContainerArea)
	{
		return 1;
	}

	return 0;
}