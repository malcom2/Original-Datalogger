
void SetValue(int Measurements[], int *used)
{
    int n = 0;
    
    do
    {
        if(*used <10)
        {
            *used = *used +1;
        }
        
        printf("Enter measurement #%d or",*used);
        scanf("%d", &n);
        Measurements[*used] = n;
    
    }while(n != 0 && *used < 10);

    if(*used >= 10)
    {
        printf("------------------------------------------------------------------------------------------------\n");
        printf("You've reached the maximum of the array");
        printf(" Please Reset the array if you want to insert more things\n");
        printf("------------------------------------------------------------------------------------------------\n");
    }    
}