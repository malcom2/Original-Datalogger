#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//gets the average in the fake array
float GetAvrgValue(int measurements[], float used_1)
{
    int sum = 0;
    float avrg;
    float used_11 =  used_1-1 ;
    for(int i = 0; i<used_1; i++)
    {
        sum += measurements[i];
    }
    
    avrg = sum/ used_11;
    return avrg;
}

