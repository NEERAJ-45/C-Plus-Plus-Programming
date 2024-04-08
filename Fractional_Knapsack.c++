#include <stdio.h>
typedef struct Objects
{
    float weight;
    float profit;
    float ratio
} Objects;
void bubbleSorted(Objects a[], int n) // function to implement bubble sort
{
    int i, j;
    Objects temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j].weight < a[i].weight)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void main()
{

    Objects x1, x2, x3;

    x1.profit = 25;
    x2.profit = 24;
    x3.profit = 15;

    x1.weight = 18.0;
    x2.weight = 15.0;
    x3.weight = 10.0;

    // write functions for finding ratio;
    x1.ratio = x1.profit / x1.weight;
}