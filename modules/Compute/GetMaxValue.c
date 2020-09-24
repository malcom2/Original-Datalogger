//Gets the Max value throught the fake array
int GetMaxValue(int measurements[], int used_3)
{
    int max = 0;

    for(int i=0; i < used_3-1; i++)
    {
        if(measurements[i] > max)
        {
            max = measurements[i];
        }
    }
    return max;    
}