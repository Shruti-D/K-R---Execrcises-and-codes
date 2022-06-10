#include <stdio.h>

/* print Fahrenheit-Celsius table 
   for fahr = 0,20,.....,300 */

main()
{
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* print Fahrenheit-Celsius table 
   for fahr = 0,20,.....,300 */

main()
{
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (fahr - 32) * 5/9;
        /*Prints the number of each line in a field three digits wide -they are right justified*/
        printf("%3d \t %3d\n", fahr, celsius); 
        fahr = fahr + step;
    }
}

/*Ex - 1.3*/
/* print Fahrenheit-Celsius table 
   for fahr = 0,20,.....,300  with more precision*/

main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        /* %3.0f - Prints the number at least 3 character wide, with no decimal point and no fraction digit*/
        /* %6.1f - Prints the number at least 6 character wide, with 1 digit after the decimal point*/
        printf("%3.0f \t %6.1f\n", fahr, celsius); 
        fahr = fahr + step;
    }
}

/*Ex-1.4*/
/* print Fahrenheit-Celsius table 
   for fahr = 0,20,.....,300  with more precision*/

main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    celsius = lower;
    printf("Conversion: Fahrenhiet To Celsius\n");
    while(celsius <= upper)
    {
        fahr = (5.0/9.0) * celsius + 32.0;
        /* %3.0f - Prints the number at least 3 character wide, with no decimal point and no fraction digit*/
        /* %6.1f - Prints the number at least 6 character wide, with 1 digit after the decimal point*/
        printf("%3.0f \t %6.1f\n", celsius, fahr); 
        celsius = celsius + step;
    }
}
