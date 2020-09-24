
//It will Get the value through the virtual array using the fake size variable "used".
void GetValue(int Measurements1[], int used)
{   
   
   if(used != 0)
   {
        printf("[");
        for(int i = 0; i<used-1; i++)
        {
                printf("%d ", Measurements1[i]);
        }
        printf("]\n");
   }
   else
   {
       printf("[No Measurements]\n");
   }
   
    

}