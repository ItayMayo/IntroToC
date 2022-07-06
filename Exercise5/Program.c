#include<stdio.h>
#include<stdbool.h>

int main()
{
    int index = get_fib_index(9);
    printf("index: %d\n", index);
    int index2 = get_fib_index(144);
    printf("index: %d", index2);
}

int get_fib_index(int n)
{
    int lastValue = 0;
    int currentValue = 0;
    bool didFindIndex = false;

    for (int requestedNumberIndex = 1; !didFindIndex; requestedNumberIndex++)
    {
        if (currentValue == n)
        {
            didFindIndex = true;
            return requestedNumberIndex;
        }
        else if (currentValue > n)
        {
            didFindIndex = true;
            return -1;
        }
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
    
    return -1;
}