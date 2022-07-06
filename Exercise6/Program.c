#include<stdio.h>
#include<math.h>

int main() 
{
	int number = 25;
	int squareRoot = CalculateSqrt(number);

	printf("Square root of %d is %d", number, squareRoot);
}

int CalculateSqrt(int number)
{
	float prevSquareRoot;
	float squareRoot = number / 2;

	do
	{
		prevSquareRoot = squareRoot;
		squareRoot = (squareRoot + (number / squareRoot)) / 2;
	} 
	while (prevSquareRoot - squareRoot != 0);

	int flooredSquareRoot = floor(squareRoot);

	return flooredSquareRoot;
}