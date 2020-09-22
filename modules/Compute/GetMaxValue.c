
int GetMaxValue(int measurements[], int ***used_3)
{

    int lastBox = 0;
    int max = 0;
   
    for(int i=0; i < ***used_3; i++)
    {
        
        if(measurements[i] > max)
        {
            max = measurements[i];
        }
    }
    
    return max;
    
}