//Resets the fake array
void SetReset(int Measurements2[], int *used, int SIZE)
{
    *used = 0;
    for(int i =0; i< SIZE; i++)
    {
        Measurements2[i] = 0;
    }
}