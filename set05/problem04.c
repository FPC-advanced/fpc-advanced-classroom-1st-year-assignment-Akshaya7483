// 4.  Write a program to find out the mood of a Camel.

// Camel is:
//  - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.

#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);
    printf("Enter the height of the camel: ");
    scanf("%f", height);
    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length) 
{
    int count;
    if (radius < height && radius < length)
    {
        count=1;
    }
    else if (height < length && height < radius)
    {
        count=2;
    }
    else if (length < height && length < radius)
    {
        count=3;
    }
    else
    {
        count=0;
    }
    return count;
}

void output(float radius, float height, float length, int mood) 
{
    printf("The Camel with radius: %.2f, height: %.2f, length: %.2f is\n ", radius, height, length);
    if(mood==1)
    {
        printf("Camel is sick \n");
    }
    else if(mood==2)
    {
        printf("Camel is happy\n");
    }
    else if(mood==3)
    {
        printf("Camel is tensed\n");
    }
    else
    {
        printf("undetermined\n");
    }
}

int main() {
    float radius, height, length;
    input_camel_details(&radius, &height, &length);
    int mood = find_mood(radius, height, length);
    output(radius, height, length, mood);
    return 0;
}