#include <stdio.h>

typedef struct Object
{
    float weight;
    float profit;
    float ratio;
} Object;

void sort(Object a[], int n)
{
    int i, j;
    Object temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j].ratio < a[j + 1].ratio)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    const int size_of_objects = 7; 
    int capacity = 20;
    Object objects[size_of_objects];
    float profit = 0;

    
    objects[0].profit = 10;
    objects[0].weight = 2;

    objects[1].profit = 5;
    objects[1].weight = 3;

    objects[2].profit = 15;
    objects[2].weight = 5;

    
    objects[3].profit = 7;
    objects[3].weight = 7;

    objects[4].profit =6 ;
    objects[4].weight = 1;

    objects[5].profit =18;
    objects[5].weight = 4;

    objects[6].profit =3 ;
    objects[6].weight = 1;



    for (int i = 0; i < size_of_objects; i++)
    {
        objects[i].ratio = objects[i].profit / objects[i].weight;
    }

    sort(objects, size_of_objects);

    int i;

    for (i = 0; i < size_of_objects; i++)
    {
        if (capacity >= objects[i].weight)
        {
            capacity -= objects[i].weight;
            profit += objects[i].profit;
        }
        else
        {
            profit += (capacity / objects[i].weight) * objects[i].profit;
            break;
        }
    }

    printf("Total Profit: %.2f\n", profit);
    return 0;
}
