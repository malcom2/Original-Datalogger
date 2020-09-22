#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int GetMinValue(int measurements[], int ***used_3)
{
    
    
    int min = measurements[1];
   
    for(int i=1; i < ***used_3; i++)
    {
        
        if(measurements[i] < min)
        {
            
            min = measurements[i];
        }
    }
    
    return min;
    
}


