#include<stdio.h>

int main()
{
    int lastValue = 0;
    int currentValue = 0;
    int requestedNumberIndex = 1;

    for (int i = 1; i < requestedNumberIndex; i++)
    {
        if (currentValue == 0)
        {
            currentValue++;
        }
        else
        {
            int newLastValue = currentValue;
            currentValue = currentValue + lastValue;
            lastValue = newLastValue;
        }
    }

    printf("Number at index %d is %d", requestedNumberIndex, currentValue);
}