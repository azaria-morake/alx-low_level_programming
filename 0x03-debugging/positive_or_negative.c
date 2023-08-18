#include "main.h"                 

/**                                                                                                                                                                   
 * main - Entry point                                                                                                                                                 
 *                                                                                                                                                                    
 * Return: always 0 (success)                                                                                                                                         
 */

void postitive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
