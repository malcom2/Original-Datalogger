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
#include "modules/Compute/GetMedianValue.c"
//#include "modules/Compute/GetNormalizedValue.c"

//Constants
#define SIZE 10

//Describes the  Array's property
void calculate(int Measurements[], int *used_1)
{
    int **used_2;
    used_2 = &used_1;

    printf("--Calculate--\n");
    
    printf("Max Value : %d\n",GetMaxValue(Measurements,&used_2));
    printf("Min Value : %d\n",GetMinValue(Measurements,&used_2));
    printf("Avr Value : %d\n",GetMedianValue(Measurements,&used_2));

    printf("-------------");
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
        printf("VECRQ?\n");
        scanf(" %c", &Letter);

        switch(Letter)
        {
            case 'e':
                SetValue(Measurements,&used_1);
            break;

            case 'c':
                calculate(Measurements,&used_1);
                break;

            case 'r':
                SetReset(Measurements,&used_1,SIZE);
                break;

            case 'v':
                GetValue(Measurements,used_1);
                break;
        }
       
    } while (Letter != 'q');
    
    printf("Exit Measurement tool!\n");

return 0;
}                 