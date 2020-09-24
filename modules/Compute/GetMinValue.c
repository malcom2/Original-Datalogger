#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//Get's Min value throught fake array
int GetMinValue(int measurements[], int used_3)
{
    int min = measurements[0];
    
    printf("%d",measurements[0]);
    for(int i=0; i < used_3-1; i++)
    {
        
        if(measurements[i] < min)
        {
            
            min = measurements[i];
        }
    }
    return min;
    
}






