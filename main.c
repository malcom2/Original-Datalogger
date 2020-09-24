/******************************************************* 
 * Name: DataLogger                                    * 
 * Purpose: Explore the property of the meassurements  *
 * Aurhor: Malcom I                                    *
 *******************************************************/
//Importing Libraries 
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//Importing modules
#include "modules/VECQR/SetValue.c"
#include "modules/VECQR/GetValue.c"
#include "modules/VECQR/SetReset.c"
#include "modules/Compute/GetMaxValue.c"
#include "modules/Compute/GetMinValue.c"
#include "modules/Compute/GetAvrgValue.c"
#include "modules/Compute/GetNormalizedValue.c"

//Constants
#define SIZE 10

//max value and min value and Avr value
void calculate(int Measurements[], int used_1)
{
    float Average =  GetAvrgValue(Measurements,used_1);
    int MaxValue = GetMaxValue(Measurements,used_1);
    int MinValue = GetMinValue(Measurements,used_1);


    printf("--Calculate--\n");
    printf("Max Value : %d\n",MaxValue);
    printf("Min Value : %d\n",MinValue);
    printf("Avr Value : %.2f\n",Average);
    GetNormalizedValue(Measurements,used_1,Average);

    printf("-------------\n");
}

int main()
{
    //initiate variables
    char Letter;
    int Measurements[10];
    int used_1 = 0;
    
    printf("Measurement tool 1.1\n");

    //Menu
    do
    { 
        printf("VECRQ? ");
        scanf(" %c", &Letter);

        switch(Letter)
        {
            case 'e':
                SetValue(Measurements,&used_1);
            break;

            case 'c':
                calculate(Measurements,used_1);
                break;

            case 'r':
                SetReset(Measurements,&used_1,SIZE);
                break;

            case 'v':
                GetValue(Measurements,used_1);
                break;
            default:
                if(Letter != 'q')
                {
                    printf("Wrong command, please enter again.\n");
                }    
                break;
        }
       
    } while (Letter != 'q');
    
    printf("Exit Measurement tool!\n");

return 0;
}                 