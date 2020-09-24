//Gets the normalized value 
void GetNormalizedValue(int measurements[], int used_1,float average)
{
    printf("[");
    for(int i = 1; i < used_1-1; i++)
    {
        printf("%.0f ",measurements[i] - average);
    }
     printf("]\n");
}