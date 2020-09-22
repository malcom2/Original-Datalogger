void GetValue(int Measurements1[], int used)
{   

   if(used != 0)
   {
        printf("[");
        for(int i = 1; i<used; i++)
        {
                printf("%d ", Measurements1[i]);
        }
        printf("]\n");
   }
   else
   {
       printf("[No Measurements]");
   }
   
    

}