//Sets value to the  fake array using the pointer used
void SetValue(int Measurements[], int *used)
{
    int n;
    
    do
    {
        
        
        printf("Enter measurement #%d (or 0) ?",*used = *used+1);
        scanf("%d", &n);

        if(n != 0)
        {
            Measurements[*used-1] = n;
           

        }
        printf("%d",*used);
            
      
    }while(n != 0 && *used < 10);

    if(*used >= 10)
    {
        printf("------------------------------------------------------------------------------------------------\n");
        printf("You've reached the maximum of the array");
        printf(" Please Reset the array if you want to insert more things\n");
        printf("------------------------------------------------------------------------------------------------\n");
    }    
}