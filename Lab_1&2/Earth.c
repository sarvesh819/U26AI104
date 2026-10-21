#include <stdio.h>
int main()
{
    long int totalSeconds=31558150;
    long int days, hrs, min, seconds;
    days=totalSeconds/(24*3600);
    totalSeconds=totalSeconds%(24*3600);
    
    hrs=totalSeconds/3600;
    totalSeconds=totalSeconds%3600;

    min=totalSeconds/60;
    seconds=totalSeconds%60;

    

    printf("total revolution time in seconds: %ld \n",31558150);
    printf("Total no. of days: %d\n ",days);
    printf("Total no. of hrs: %d\n",hrs);
    printf("total no. of min: %d\n",min );
    printf("Total no. of seconds:%d\n",seconds);
    return 0;

}